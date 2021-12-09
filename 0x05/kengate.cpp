//
// Created by xy564313 on 05.11.2021.
//
#include<iostream>
using namespace std;

void swap(double* pd1, double* pd2);
void swap(double& d1, double& d2);
void swap_ptr(double*& pd1, double*& pd2);

int main(){
    double a{2.3};
    double b{4.5};
    cout << a  << " " << b << endl;
    swap(&a, &b);
    cout << a  << " " << b << endl;
    swap(a, b);
    cout << a  << " " << b << endl;
    double* pa = &a;
    double* pb = &b;
    cout << pa  << " " << pb << endl;
    swap_ptr(pa, pb);
    cout << pa  << " " << pb << endl;
}

void swap(double* pd1, double* pd2){
    double t = *pd1;
    *pd1 = *pd2;
    *pd2 = t;
}

void swap(double& d1, double& d2){
    double t = d1;
    d1 = d2;
    d2 = t;
}

void swap_ptr(double*& pd1, double*& pd2){
    double* t = pd1;
    pd1 = pd2;
    pd2 = t;
}

