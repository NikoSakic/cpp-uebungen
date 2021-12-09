//
// Created by xy564313 on 29.10.2021.
//
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;


int main() {

    int a[]{2, 3, 5, 7};
    vector v{2, 3, 5, 7};
    cout << "a=[ ";
    for(auto& x: a){
        x *=2;
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "v=[ ";
    for(auto& x: v){
        cout << x << " ";
        x *= 2;
    }
    cout << "]" << endl;
    typedef const vector<int>::const_iterator it_type;
    it_type  it = v.cbegin();
    cout << "v=[ ";
    for(size_t i = 0; i < v.size(); i++){
        cout << *(it+i) << " ";
    }
    cout << "]" << endl;

}