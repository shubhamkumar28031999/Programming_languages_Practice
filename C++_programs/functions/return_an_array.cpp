#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int* return_null_array(int len){
    int* ptr;
    ptr=(int *)malloc(len*sizeof(int));   // this array will be created in the heap memory
    return ptr;
}

void print_arr(int arr[], int len){    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int len=5;
    int* arr;
    arr=return_null_array(len);
    print_arr(arr,len);
    return 0;
}