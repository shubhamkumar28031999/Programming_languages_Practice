#include<stdio.h>
int main(){
    int x=5,y=2;
    printf("%d\n",x+y);
    printf("%d\n",x-y);
    printf("%d\n",x*y);
    printf("%d\n",x/y);
    printf("%f\n",(float)x/y);  // type casting
    printf("%d\n",x%y); //remainder 

    // printf("%f\n",5/2); // throws error; need  type casting
    printf("%f\n",5.0/2);    //converted the expression p5.0) in float 
}