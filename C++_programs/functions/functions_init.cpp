#include<iostream>
#include<stdio.h>
using namespace std;
// this is call by value
int add(int a, int b){   // prototype of a function/ declatration of function
                        //  here a and b are formal parameters
    return a+b;
}

int main(){
    int a=10,b=20,c;
    c=add(a,b);  // function calling,   a and b are actual parameters
    cout<<"sum of a and b= "<<c<<endl;
    return 0;
}