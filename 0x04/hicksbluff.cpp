//
// Created by xy564313 on 29.10.2021.
//
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unordered_map;

int main(){
    vector<int> v{1,2,3,4,5};
    vector<int>::iterator it = find(v.begin(), v.end(), 2);
    int i = 0;
    while(it != v.end() && i <= 3){
        cout << *it << " ";
        it++;
        i++;
    }
    cout << endl;

    unordered_map<int, string> map{{1,"Eins"}, {2,"Zwei"},{3,"Drei"}, {4,"Vier"},{5,"Fünf"}};
    auto key = map.find(2);
    cout << "map.size() = " << map.size() << endl;
    for(auto x: map){
        if(x.first > 2){
            map.erase(x.first);
        }
    }
    cout << "map.size() = " << map.size() << endl;

}
