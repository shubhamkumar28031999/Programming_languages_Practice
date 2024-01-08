#include<stdio.h>
int main(){
    int x = 32768;
    short int y = 32767; // throws error range -32768 to 32767
    printf("%d",y);
}