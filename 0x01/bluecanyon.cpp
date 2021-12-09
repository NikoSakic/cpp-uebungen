//
// Created by xy564313 on 08.10.2021.
//
#include <iostream>
using namespace std;
double pot(double b, int n);
int main() {
    cout << "Geben sie eine Basis ein: ";
    double b;
    cin >> b;
    cout << "Geben sie einen Exponenten ein: ";
    int n;
    cin >> n;
    double ergebnis{1};
    /*for(int i = 0; i < n; i++){
        ergebnis *= b;
    }*/
    ergebnis = pot(b, n);
    cout << b << "^" << n << " = " << ergebnis << endl;
    return 0;
}

double pot(double b, int n){
    double ergebnis{1};
    for(int i = 0; i < n; i++){
        ergebnis *= b;
    }
    return ergebnis;
}