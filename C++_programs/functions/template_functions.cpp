#include<iostream>
#include<stdio.h>
using namespace std;

template <typename T> T maximum(T a,T b){    // this function will support all data type.
    return (a>b) ? a : b;
}

int main(){
    cout<<"max of 10 and 20= "<< maximum<int>(10,20)<<endl;
    cout<<"max of 21.3 and 22.3 in float= "<< maximum<float>(21.3,22.3)<<endl;
    cout<<"max of 21.3 and 22.3 in int= "<< maximum<int>(21.3,22.3)<<endl;    // this will give warnings
    cout<<"max of p and A in int= "<< maximum<char>('p','A')<<endl;
    return 0;
}