#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

int main(){
    int a=10,b=20;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}

//   a/x      b/y    
//   _____    _____
//   | 10 |  | 20 |
//   ------   -----
//  memory will only be allocated in the main memory only. In main function variable ae called by
//  its actual name while the same variable are call with x and y for the swap function.
// there will be only one activation record of the main function. 
// so technically swap function is part of the main function here.
// It is kind of monolithic program not procedural program.
