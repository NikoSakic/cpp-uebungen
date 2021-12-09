//
// Created by xy564313 on 12.11.2021.
//
#include<iostream>
using namespace std;

int main(){
    const char * str = "hallo";
    for(const char * p=str; true ; ++p){
        cout << *p << "   " << (int) *p << endl;
        if(*p == 0){
            break;
        }
    }
    cout << &str << endl;
    cout << (char**)str << endl;
}
