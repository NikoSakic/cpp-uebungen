//
// Created by xy564313 on 08.10.2021.
//
#include<iostream>
using namespace std;

void printArray(double a2[], int length);

int main(){
    int const length{3};
    double arr[length];
    arr[0] = 1.0;
    arr[1] = 2.0;
    arr[2] = arr[0] + arr[1];
    cout << "arr[0]= " << arr[0] << endl << "arr[1]= " << arr[1] << endl << "arr[2]= " << arr[2] << endl;
    double a2[sizeof(arr)/sizeof(arr[0])];  // double 8 byte /double[3] 24 byte =3
    for(int i = 0; i < 3; i++){
        a2[i] = arr[i];
    }
    printArray(a2, length);

    return 0;
}

void printArray(double a2[], int length){
    cout << length << endl;
    for(int i = 0; i < length; i++){
        cout << "Array[" << i << "] = " << a2[i] << endl;
    }
}
