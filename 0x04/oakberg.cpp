//
// Created by xy564313 on 29.10.2021.
//
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main(){

    int a[]{2,3,5,7};
    vector v{2,3,5,7};
    cout << "a=[";
    for(auto x: a){
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "v=[ ";
    for(auto x: v){
        cout << x << " ";
    }
    cout << "]" << endl;
}