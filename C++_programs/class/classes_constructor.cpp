#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length=1;
            breadth=1;
        }
        Rectangle(int l, int b);
        
        int area();
        int perimeter();

        void print_rectangle();

        void set_length(int l);
        void set_breadth(int b);
};

Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

void Rectangle::print_rectangle(){
    cout<<"length= "<<length<<" breadth= "<<breadth<<endl;
}

void Rectangle::set_length(int l){
    length=l;
}

void Rectangle::set_breadth(int b){
    breadth=b;
}

int main(){
    Rectangle r1;
    r1.set_length(10);
    r1.set_breadth(20);
    r1.print_rectangle();
    cout<<"area of r1= "<<r1.area()<<endl;

    Rectangle r2(200,100);
    r2.print_rectangle();
    cout<<"perimeter of r2= "<<r2.perimeter()<<endl;
}