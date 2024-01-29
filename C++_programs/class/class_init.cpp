#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class  rectangle
{
private:
    int length;
    int breadth;
public:

    rectangle(){        // function with the same name as class is call constructor
        length=0;       // it is automatically called when class is initialize.
        breadth=0;      
    }

    rectangle(int l, int b){   // this is overloaded constructors
        length=l;            
        breadth=b;
    }

    void print_rectangle(){
        cout<<"Length= "<<length<<" Breadth= "<<breadth<<endl;
    }

    int area(){
        return length*breadth;
    }    

    void change_length(int l){
        length=l;
    }
    void change_breadth(int b){
        breadth=b;
    }
};


int main(){
    rectangle r1(20,10);
    r1.print_rectangle();
    cout<<"Area= "<<r1.area()<<endl;
    r1.change_length(200);
    r1.print_rectangle();
}
