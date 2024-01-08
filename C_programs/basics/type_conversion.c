#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number: ");
    scanf("%d",&b);
    float div = (float)a/b;
    printf("division of a and b is %.2f",div);
    return 0;
}