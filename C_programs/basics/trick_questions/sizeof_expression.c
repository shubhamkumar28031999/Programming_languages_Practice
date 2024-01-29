#include<stdio.h>
int main(){
    int a,b=1,c=1;
    a=sizeof(c=++b + 1);
    printf("a=%d, b=%d, c=%d \n",a,b,c);
    return 0;
}

/*  sizeof will be computed at the compile time. So the value of "a" will be assigned as 4 and rest of
 * of the variable will be the same.  */