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

Random* Random::Get() {
    if (Instance == nullptr) {
        time_t Seed = chrono::system_clock::now().time_since_epoch().count();
        default_random_engine NewRng(Seed);
        Instance = new Random(NewRng);
    }
    return Instance;
}