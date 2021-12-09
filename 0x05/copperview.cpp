//
// Created by xy564313 on 05.11.2021.
//
#include<iostream>
using namespace std;

int main(){
    int n{3};
    float f{4.6f};
    int* pn = &n;
    float* pf = &f;
    *pf = 0;
    *pn = 0;
    cout << pn << " " << *pn << " " << n << endl;
    cout << pf << " " << *pf << " " << f << endl;
    int** pnn= &pn;
    cout << "**pnn=n= " << **pnn << endl;
}
