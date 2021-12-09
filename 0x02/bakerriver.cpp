//
// Created by xy564313 on 15.10.2021.
//
#include<iostream>
#include<cmath>
using namespace std;

void cut(double& d1);
void shift(string& s1, string& s2, string& s3);

int main(){
    double d = 12.94;
    cout << "vorher " << d << endl;
    cut(d);
    cout << "nachher " << d << endl;
    string a = "a";
    string b = "b";
    string c = "c";
    cout << "vorher   " << a << b << c << endl;
    shift(a, b ,c);
    cout << "nachher   " << a << b << c << endl;
}

void cut(double& d1){
    d1 = floor(d1);
}

void shift(string& s1, string& s2, string& s3){
    string temp = s1;
    s1 = s2; s2 = s3; s3 = temp;
}

