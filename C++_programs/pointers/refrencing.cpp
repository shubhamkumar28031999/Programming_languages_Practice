#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a=10;
    int &b=a;   // does not occupi
    printf("%d\n",a);
    cout<<b<<endl;
    int c=50;
    b=c;
    printf("%d\n",a);
    cout<<b<<endl;
    return 0;
}