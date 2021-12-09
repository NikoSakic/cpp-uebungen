//
// Created by xy564313 on 26.11.2021.
//
#include<iostream>
#include<vector>
using namespace std;

class states{
private:
    vector<string> zustaende{"Connected","Disconnected","Unkown"};
    int aktiv = 0;
public:
    states(){}
    states(int i):aktiv(i){}
    string getZustand(int i)const{return zustaende[i];}
    string get()const{return zustaende[aktiv];}
    void setZustand(int i){ aktiv = i;}
    void forward(){
        aktiv = (aktiv+1)%zustaende.size();
    }
    void backwards(){
        aktiv = (aktiv-1)%zustaende.size();
    }
    void add(const string& s){
        zustaende.push_back(s);
    }
    void clear(){
        zustaende.clear();
        aktiv = 0;
    }
    int size() const{return zustaende.size();}

    states& operator=(int i){
        aktiv = i;
        return *this;
    }
    states& operator+=(string s){
        add(s);
        return *this;
    }
    states& operator++(){
        forward();
        return *this;
    }
    states& operator--(){
        backwards();
        return *this;
    }
    int operator()(){
        return aktiv;
    }
    string& operator[](size_t i) {
        if (i>=size())
            throw invalid_argument("index too large");
        return zustaende[i];
    }

};

ostream& operator<<(ostream& os, const states& s){
    os << "{";
    for(int i = 0; i < s.size(); ++i){
        os << s.getZustand(i);
        if(i != s.size()-1){
            os << ", ";
        }
    }
    os << "}" << endl;
    return os;
}



int main(){
    states s{2};
    cout << s.get() << endl;
    s.setZustand(0);
    cout << s.get() << endl;
    cout << s;
    s.add("Locked");
    cout << s;
    s.clear();
    s += "home";
    s += "Unkown";
    s.add("Known");
    s += "Disconnected";
    cout << s.get() << endl;
    s = 3;
    cout << s.get() << endl;
    ++s;
    cout << s.get() << endl;
    --s;
    cout << s.get() << endl;
    cout << s;
    s[0] = "Unlocked";
    cout << s;
    s = 2;
    cout << s[s()] << endl;




}