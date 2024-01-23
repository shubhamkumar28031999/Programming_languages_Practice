#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

void print_struct(struct rectangle r1){
    cout<<"length="<<r1.length<<" breadth="<<r1.breadth<<endl;
}

int main(){
    struct rectangle s1={10,20};
    print_struct(s1);
    return 0;
}

