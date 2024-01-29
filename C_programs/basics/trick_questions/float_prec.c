#include<stdio.h>
int main(){
    float f=0.1;
    if (f==0.1){
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}


// this floating point comparision between float and double
// 0.1 is of double data type which has high precision as compared to float
// double has percesion upto 10 numbers while float upto 6.
// thus both of them can't be equal 
// So, ans is false