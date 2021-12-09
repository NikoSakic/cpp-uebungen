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

struct buch{
    string autor;
    string titel;
};
typedef unordered_map<string,buch> katalog_t;

int main(){
    katalog_t katalog{{"3868206078",{"George Orwell","1984"}},
                      {"0440180295",{"Kurt Vonnegut","Slaughter-House Five: The Childrens Crusade"}},
                      {"0891419195",{"Eugene Sledge","With the Old Breed: At Peleliu and Okinawa"}}};
    for(const auto& x: katalog){
        if(x.second.titel.length() > 30){
            cout << x.first << " " << x.second.autor << " " << x.second.titel << endl;
        }
    }
}
