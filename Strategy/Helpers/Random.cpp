#include "../Struct/Vector3.h"
#include "Random.h"
#include<functional>
#include<chrono>

Random::Random(default_random_engine& NewRng):Rng(NewRng) {}

Random* Random::Instance = nullptr;

bool Random::RandomBool() {
    uniform_int_distribution<int> distribution(0, 1);
    return distribution(Rng);
}

int Random::RandomInt(int Min, int Max) {
    uniform_int_distribution<int> distribution(Min, Max);
    return distribution(Rng);
}

Vector3 Random::RandomVector3(Vector3 Min, Vector3 Max) {
    int RandX = RandomInt(Min.X, Max.X);
    int RandY = RandomInt(Min.Y, Max.Y);
    int RandZ = RandomInt(Min.Z, Max.Z);
    return Vector3(RandX, RandY, RandZ);
}

Random* Random::Get() {
    if (Instance == nullptr) {
        time_t Seed = chrono::system_clock::now().time_since_epoch().count();
        default_random_engine NewRng(Seed);
        Instance = new Random(NewRng);
    }
    return Instance;
}