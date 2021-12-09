//
// Created by xy564313 on 08.10.2021.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    char c;
    cout << "Geben sie eine Zahl n ein: ";
    cin >> n;
    cout << "Geben sie einen Buchstaben ein: ";
    cin >> c;
    int ascii = c;
    bool groeßernull = (n>0);
    string antwort_n = groeßernull ? "n ist größer null" : "n ist kleiner gleich null";
    cout << antwort_n << endl;
    bool großbuchstabe = (ascii >= 65 && ascii <= 96);
    string antwort_c = großbuchstabe ? "c ist ein Großbuchstabe." : "c ist kein Großbuchstabe";
    cout << antwort_c << endl;
    return 0;
}
