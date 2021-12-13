//
// Created by xy564313 on 10.12.2021.
//
#include<iostream>
using namespace std;
template<typename T>
class punkt {
private:
    T x_{};
    T y_{};
public:
    // Implementieren Sie einen default-ctor und einen dtor.
    punkt() = default;  // (A)
    ~punkt() = default; // (B)

    // Implementieren Sie einen weiteren ctor, der einen x- und einen y-Wert vom
    // Typ 'double' übergeben bekommt. Benutzen Sie ':' zur Initialisierung.
    punkt(T x, T y) : x_{x}, y_{y} {}; // (C)

    // Implementieren Sie 'getter' und 'setter' für 'x' und 'y'.
    T x() const { return x_; };
    T y() const { return y_; };
    void set_x(T x) { x_ = x; }
    void set_y(T y) { y_ = y; }

    // Erweiterung:
    // Implementieren Sie einen copy-ctor.
    punkt(const punkt &p) = default;
};

template<>
class punkt<bool> {
private:
    bool x_{};
    bool y_{};
    punkt() = default;
    punkt(bool x, bool y) : x_{x}, y_{y} {};
public:
    // Implementieren Sie einen default-ctor und einen dtor.
    ~punkt() = default; // (B)

    // Implementieren Sie einen weiteren ctor, der einen x- und einen y-Wert vom
    // Typ 'double' übergeben bekommt. Benutzen Sie ':' zur Initialisierung.

    // Implementieren Sie 'getter' und 'setter' für 'x' und 'y'.
    bool x() const { return x_; };
    bool y() const { return y_; };
    void set_x(bool x) { x_ = x; }
    void set_y(bool y) { y_ = y; }

    // Erweiterung:
    // Implementieren Sie einen copy-ctor.
    punkt(const punkt &p) = default;
};

int main(){

    return 0;
}