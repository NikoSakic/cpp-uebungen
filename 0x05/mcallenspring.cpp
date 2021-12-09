//
// Created by xy564313 on 05.11.2021.
//
#include<iostream>
using namespace std;

int main(){
    int n{0x12345678};  // Wert der Speicheradresse wird uebergeben
    char *c{(char*) &n};
    cout << n << endl;
    cout << +c[0] << endl;
    cout << +c[1] << endl;
    cout << +c[2] << endl;
    cout << +c[3] << endl;
    c[3] = 0x43217891;
    int z = 2;
    c[1] = z;
    cout << +c[3] << endl;
    cout << c[3] << endl;
    cout << +c[1] << endl;
    cout << n << "   " << endl;


}
