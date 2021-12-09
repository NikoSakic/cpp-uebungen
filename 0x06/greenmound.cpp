//
// Created by xy564313 on 12.11.2021.
//
#include<iostream>
using namespace std;

int length(char * str){
    int l = 0;
    for(const char * p=str; (*p) ; ++p){
        l += 1;
    }
    return l;
}

char* copy(char * str){
    char * s = new char[length(str)];
    for(int i = 0; i < length(str);++i){
        s[i] = str[i];
    }
    return s;

}

void free(char * str){
    delete[] str;
}

int main(){
    char * s = "hallo";
    char * c = copy(s);
    cout << c << endl;
    free(c);
    cout << *c << endl;

}

