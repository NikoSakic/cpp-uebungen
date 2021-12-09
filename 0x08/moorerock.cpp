//
// Created by xy564313 on 03.12.2021.
//
#include<iostream>
#include<vector>
#include <memory>

using namespace std;

class window{
public:
    int id;
    bool visible;
    window(int id): id(id),visible{false}{cout << "ctor::window" << endl;}
    virtual ~window(){cout << "dtor::window" << endl;}
    void show(){
        visible = true;
    }
    void hide(){
        visible = false;
    }
    virtual void draw() = 0;

};

class button : public window{
public:
    button(int id) : window(id){cout << "ctor::button" << endl;}
    ~button(){cout << "dtor::button" << endl;}
    virtual void draw(){
        if(window::visible){
            cout << "button:: id= " << window::id << endl;
        }else{
            cout << "button:: not visible"<< endl;
        }
    }
};

class checkbox : public window{
public:
    checkbox(int id) : window(id){cout << "ctor::button" << endl;}
    ~checkbox(){cout << "dtor::button" << endl;}
    virtual void draw(){
        if(window::visible){
            cout << "checkbox:: id= " << window::id << endl;
        }
        else{cout << "checkbox:: not visible"<< endl;
        }
    }
};

int main(){
    vector<unique_ptr<window>> vect;
    button b(2);
    checkbox c(3);
    vect.push_back(make_unique<button>(b));
    vect.push_back(make_unique<checkbox>(c));
    vect.at(0)->draw();
    vect.at(1)->draw();
    return 0;
}