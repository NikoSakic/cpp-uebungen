//
// Created by xy564313 on 12.11.2021.
//
#include<iostream>
using namespace std;

int length(char * text);
void ausgabe(char * feld[]);
void ausgabeReihenfolge(char * feld[]);

int main(){
    char * feld[]{{"Dies"},{"ist"},{"ein"},{"Satz"}};
    ausgabe(feld);
    ausgabeReihenfolge(feld);
}

void ausgabe(char * feld[]){
    for(int i = 4; i >= 0; --i){
        char * s = feld[i];
        int n = length(s);
        for(int j = n-1; j >=0; --j){
            cout << *(s+j);
        }
        cout << endl;
    }
}

void ausgabeReihenfolge(char * feld[]){
    for(int i = 4; i >= 0; --i){
        cout << feld[i] << endl;
    }
}

int length(char * text){
    int l = 0;
    for(const char * p=text; (*p) ; ++p){
        l += 1;
    }
    return l;
}