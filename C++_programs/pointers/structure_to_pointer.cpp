#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle r1={10,20};
    struct rectangle* ptr=&r1;
    cout<<"breadth of rectangle= "<<ptr->breadth<<endl;
    printf("length of rectangle= %d\n",(*ptr).length);

    // dynamic allocaton
    struct rectangle* ptr2=(struct rectangle*)malloc(sizeof(struct rectangle));
    ptr2->breadth=100;
    ptr2->length=200;
    cout<<"breadth of rectangle= "<<ptr2->breadth<<endl;
    printf("length of rectangle= %d\n",(*ptr2).length);
    return 0;
}