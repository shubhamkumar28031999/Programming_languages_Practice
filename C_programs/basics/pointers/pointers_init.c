#include<stdio.h>
#include<stdlib.h> //used for dynamic memory allocations

int main(){
    int a=10;
    int* ptr1=&a;
    printf("address of ptr2= %p\n",ptr1);
    printf("derefrencing of ptr2= %d\n",*ptr1);

    int* arr1 = (int *)malloc(5*sizeof(int));
    arr1[0]=10;
    arr1[1]=20;
    printf("address of arr1 = %p\n",arr1);
    printf("address 2nd index of arr1 = %p\n",&arr1[1]);
    printf("size of arr1 = %ld\n",sizeof(arr1));
    printf("value at position 0 =%d\n",arr1[0]);
    free(arr1);
}