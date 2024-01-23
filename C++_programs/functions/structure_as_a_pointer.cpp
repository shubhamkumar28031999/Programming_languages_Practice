#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

struct rectangle* return_rectangle(){
    struct rectangle* r1 = (struct rectangle*)malloc(sizeof(struct rectangle));
    return r1;
}

void print_struct(struct rectangle* r1){
    cout<<"length="<<r1->length<<" breadth="<<r1->breadth<<endl;
}

int main(){
    struct rectangle* r1;
    r1 = return_rectangle();
    r1->length=10;
    r1->breadth=20;
    print_struct(r1);
    return 0;
}