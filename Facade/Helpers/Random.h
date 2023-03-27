#pragma once
#include<random>

using namespace std;

//default_random_engine rng(time(NULL));

class Random {
private: 
    static Random* Instance;
    Random(default_random_engine& NewRng);
    default_random_engine Rng;
public:    
    bool RandomBool();
    int RandomInt(int Min, int Max);
    static Random* Get();
};