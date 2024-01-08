#include<stdio.h>
int main() {
    int array[]= {10,11,12,13,14};
    for (int i =0; i<5;i++){
        printf("%d ",*(array+i));
    }
   return 0;
}