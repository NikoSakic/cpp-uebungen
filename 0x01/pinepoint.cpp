//
// Created by xy564313 on 08.10.2021.
//
#include<iostream>
using namespace std;

bool isPrim(int n);
string isPrimText(int n);

int main(){
    int max;
    cout << "Zahl eingeben: ";
    cin >> max;
    cout << endl;
    for(int i = 2; i <= max; i++){
        if(i == max){
            cout << max << endl;
        }
        if(max%i==0){
            break;
        }
    }
    cout << "Ist n eine Primzahl: " << isPrimText(max) << endl;
}

bool isPrim(int n){
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

string isPrimText(int n){
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return "false";
        }
    }
    return "true";
}