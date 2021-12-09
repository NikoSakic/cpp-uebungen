//
// Created by xy564313 on 22.10.2021.
//
#include<iostream>
using namespace std;

const int dim{4};

class polynom{
    int coeffs[dim];
public:
    polynom(int a[]){
        for(int i = 0; i < dim; i++){
            coeffs[i] = a[i];
        }
    }
    void eval(int x){
        cout << "polynom: coeffs[" << x << "] = " << coeffs[x] << endl;
    }

    int at(int i) const{
        if(i < 0 || i >= dim){
            throw runtime_error("der Index i ist nicht im Feld coeffs enthalten");
        }
        return coeffs[i];
    }

};

polynom add(polynom& a, polynom& b){
    int e[dim];
    for(int i = 0; i < dim; i++){
        e[i] = a.at(i) + b.at(i);
    }
    return polynom{e};
}

int main(){
    int c[dim]{12, 14, 6, 2};
    polynom b{c};
    b.eval(0);
    b.eval(1);
    b.eval(2);
    b.eval(3);
    int d[dim]{-4,-9,3, 22};
    polynom z{d};
    polynom ergebnis = add(b,z);
    cout << "Ergebnis von Polynomen b + z = { ";
    for(int i = 0; i < dim; i++){
        cout << ergebnis.at(i);
        if(i < dim-1){
            cout << ", ";
        }
    }
    cout << " }";
    return 0;
}

