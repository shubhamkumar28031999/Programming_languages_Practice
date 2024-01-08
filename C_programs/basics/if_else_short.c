#include<stdio.h>
void check(int a, int b){
    (a>b) ? printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    check(a,b);
}