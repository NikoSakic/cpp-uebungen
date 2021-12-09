//
// Created by xy564313 on 03.12.2021.
//
#include<iostream>
#include<vector>
#include<memory>
using namespace std;

class matrix{
public:
    const size_t dim;
    matrix(size_t dim): dim(dim){

    }
    virtual ~matrix(){}
    virtual double at(size_t x, size_t y) const= 0;
    virtual double& at(size_t x, size_t y) = 0;
    virtual void make_zero() = 0;
    void make_one(){
        make_zero();
        for(size_t i = 0; i < dim; ++i){
            at(i,i) = 1;
        }
    }

};

class full_matrix : public matrix{
    vector<unique_ptr<size_t>> matr;
    virtual double at(size_t x, size_t y) const{
        return (*matr.at(x)+y);

    }
    virtual double& at(size_t x, size_t y){

    }

};

int main(){
    return 0;
}

