#pragma once
#include<random>

using namespace std;

//default_random_engine rng(time(NULL));

struct Vector3;

class Random {
private: 
    static Random* Instance;
    Random(default_random_engine& NewRng);
    default_random_engine Rng;
public:    
    bool RandomBool();
    int RandomInt(int Min, int Max);
    Vector3 RandomVector3(Vector3 Min, Vector3 Max);
    static Random* Get();
};