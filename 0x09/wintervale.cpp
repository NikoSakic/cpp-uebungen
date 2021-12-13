//
// Created by xy564313 on 10.12.2021.
//
#include<iostream>
using namespace std;

template<size_t b, size_t n>
struct potenz{
    const static int value = potenz<b,n-1>::value * b;
};

template<size_t b>
struct potenz<b,0>{
    const static int value = 1;
};

template<size_t n>
struct potenz<1,n>{
    const static int value = 1;
};

int main(){
    cout << potenz<2,5>::value << endl;
    cout << potenz<2,15>::value << endl;
    cout << potenz<1,15>::value << endl;
    return 0;
}

