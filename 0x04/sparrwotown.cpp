//
// Created by xy564313 on 29.10.2021.
//
#include<iostream>
using namespace std;

template<typename T>
class bruch{
    typedef T value;
    value nenner, zaehler;
public:
    bruch(){

    }

    [[maybe_unused]] bruch(value z, value n) : nenner(n), zaehler(z) {

    }

    bruch(const bruch& b) : nenner(b.nenner), zaehler(b.zaehler){

    }

    ~bruch() {
        cout << "dtor Aufruf" << endl;
    }

    value get_nenner() const{
        return nenner;
    }
    value get_zaehler() const {
        return zaehler;
    }
    void set_nenner(const value nenner){
        this->nenner = nenner;
    }
    void set_zaehler(const value zaehler) {
        this->zaehler = zaehler;
    }

};


int main(){
    bruch b{12, 7};
    bruch b2{12.5,4.5};
    cout << b.get_zaehler() << "/" << b.get_nenner() << " = " << b.get_zaehler()/b.get_nenner() << endl;
    cout << b2.get_zaehler() << "/" << b2.get_nenner() << " = " << b2.get_zaehler()/b2.get_nenner() << endl;

}
