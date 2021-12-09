//
// Created by xy564313 on 22.10.2021.
//
#include<iostream>
using namespace std;

class bruch{
    int nenner;
    int zaehler;
public:
    bruch(){

    }

    [[maybe_unused]] bruch(int z, int n) : nenner(n), zaehler(z) {

    }

    bruch(const bruch& b) : nenner(b.nenner), zaehler(b.zaehler){

    }

    ~bruch() {
        cout << "dtor Aufruf" << endl;
    }

    int get_nenner() const{
        return nenner;
    }
    int get_zaehler() const {
        return zaehler;
    }
    void set_nenner(const int nenner){
        this->nenner = nenner;
    }
    void set_zaehler(const int zaehler) {
        this->zaehler = zaehler;
    }

};

void print_bruch(ostream& os, const bruch& a) {
    os << "a|    a= " << "{ Bruch: "
       << a.get_zaehler() << "/" << a.get_nenner()
       << " }" << endl;
}

ostream& operator<<(ostream& os, const bruch& a) {
    os << "Bruch: { " << a.get_zaehler() << "/" << a.get_nenner()
       << " }" << endl;
    return os;
}

int main(){
    bruch b;
    b.set_nenner(12);
    b.set_zaehler(6);
    cout << "Bruch: b ist gleich " << b.get_zaehler() << "/" << b.get_nenner() << endl;
    bruch c{3,4};
    cout << "Bruch: c ist gleich " << c.get_zaehler() << "/" << c.get_nenner() << endl;
    bruch copy{b};
    cout << "Bruch: copy ist gleich " << copy.get_zaehler() << "/" << copy.get_nenner() << endl;
    print_bruch(cout, copy);
    cout << c;


}
