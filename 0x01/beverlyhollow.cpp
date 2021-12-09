//
// Created by xy564313 on 08.10.2021.
//
#include <iostream>
using namespace std;

int fib(int index){
    return index <= 1 ? 1: fib(index-1)+ fib(index-2);
}

int main(){
    int k{0};
    int r{0};
    int s{1};
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        k = r+s;
        r = s;
        s= k;
    }
    cout << k << endl;
    cout << fib(n);
}
