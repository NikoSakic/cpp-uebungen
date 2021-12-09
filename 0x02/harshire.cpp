//
// Created by xy564313 on 15.10.2021.
//
#include<iostream>
using namespace std;

const int dim{3};

struct stack{
    int feld[dim];
    int next = 0;
};

void push(stack& st, int n) {
    if(st.next >= dim){
        throw runtime_error("stack: feld out of bounds");
    }
    st.feld[st.next] = n;
    st.next++;
}
int pop(stack& st){
    st.next -= 1;
    int val = st.feld[st.next];
    st.feld[st.next] = 0;
    return val;
}

void printStack(stack st){
    for(int i = 0; i < dim; i++){
        cout << "Stack Feld[" << i << "] = " << st.feld[i] << endl;
    }
    cout << endl;
}

int main(){
    // Test
    stack s{};
    push(s, 5);
    push(s, 5);
    cout << "Members of Stack:" << endl;
    printStack(s);
    push(s, 12);
    printStack(s);
    pop(s);
    pop(s);
    push(s, 7);
    push(s, 12);
    push(s, 14);
    printStack(s);


    return 0;
}

