#include<iostream>
#include<stdio.h>
using namespace std;

void change_array(int arr[],int len){
    for(int i=0;i<len;i++){
        arr[i]++;
    }
}

void print_arr(int arr[], int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={10,20,30,40,50};
    int len = sizeof(arr)/sizeof(int);
    print_arr(arr,len);
    change_array(arr,len);
    print_arr(arr,len);
    return 0;
}