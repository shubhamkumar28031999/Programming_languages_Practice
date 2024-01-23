#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1;
    r1.breadth=20;
    r1.length=10;
    printf("breadth=%d  length=%d\n",r1.breadth,r1.length);

    struct Rectangle r2={200,100};
    printf("Area of rectangle 2 = %d",2*r2.breadth*r2.length);
    return 0;
}