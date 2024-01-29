#include<stdio.h>
int main(){
    int a=1,b=3,c=2;
    if (a>b)
        if(b>c)
            printf("upper print");
    else
        printf("lower print");
}

// this code will not print any thing because the else is considered as a nested else.