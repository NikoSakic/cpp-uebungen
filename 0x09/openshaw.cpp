//
// Created by xy564313 on 10.12.2021.
//
#include<iostream>
#include<vector>
#include<memory>
using namespace std;


struct beliebig{
    string name;
    beliebig(string name) : name(std::move(name)){}
};

int main(){
    std::vector<beliebig> vect;
    beliebig b("text");
    beliebig b2("beliebig");
    vect.push_back(b);
    vect.push_back(b2);
    vector<beliebig*> vect_ptr;
    vect_ptr.push_back(&b);
    vect_ptr.push_back(&b2);
    vector<unique_ptr<beliebig>> unique_vect;
    unique_vect.push_back(make_unique<beliebig>(b));
    vector<shared_ptr<beliebig>> shared_vect;
    shared_vect.push_back(make_shared<beliebig>(b2));
    for (auto &val : vect) {
        std::cout << val.name << std::endl;
    }
    for (auto &val : vect_ptr) {
        cout << val << ":  " << val->name << endl;
    }
    for(auto &val : unique_vect){
        cout << val << ":  " << val->name << endl;
    }
    for(auto &val : shared_vect){
        cout << val << ":  " << val->name << endl;
        cout << val << "count:  " << val.use_count() << endl;
    }

}
