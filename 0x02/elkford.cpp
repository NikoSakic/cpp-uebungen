//
// Created by xy564313 on 15.10.2021.
//
#include<iostream>
using namespace std;
const int dim{3};
struct polynom{
    int coeffs[dim];
    polynom(int a[]){
        for(int i = 0; i < dim; i++){
            coeffs[i] = a[i];
        }
    }
};

void eval(polynom& p, int x);

int main(){
    int c[dim]{12, 14, 12};
    polynom b{c};
    eval(b, 0);
    eval(b, 1);
    eval(b, 2);

}

void eval(polynom& p, int x){
    cout << "polynom: coeffs[" << x << "]= " << p.coeffs[x] << endl;
}

