//
// Created by xy564313 on 12.11.2021.
//
#include<iostream>
#include<memory>
#include<unordered_map>
using namespace std;

struct address{
    string namen;
    string telnr;
    address(const string& name, const string& number)
            : namen(name), telnr(number) {}
};

int main(){
    unordered_map<int,unique_ptr<address>> map;
    map[1] = make_unique<address>("Thomas","245223454");
    map[2] = make_unique<address>("Jan","01732135");
    map[3] = make_unique<address>("Alexander","12382832");
    cout << "map = {";
    for(auto& x : map){
        cout << "(" << x.first << ", " <<x.second->namen << ", "<< x.second->telnr<<")";
    }
    cout << "}" << endl;
    map.clear();
    return 0;
}

