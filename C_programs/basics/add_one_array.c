#include<stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
 
    int carry=1;
    int sum=0;
    for (int i = digitsSize-1;i>=0;i--){
        sum = digits[i]+carry;
        digits[i] = sum%10;
        carry = sum/10;
    }
    int *arr=  malloc((digitsSize+carry) * sizeof(int));
    *returnSize=digitsSize+carry;
    if (carry){
    arr[0]=1;
    }
    for (int j=0+carry;j<digitsSize+carry;j++){
        if (carry){
            arr[j]=digits[j-1];
        } else {
            arr[j]=digits[j];
        }
    }
  return arr;
}

int main(){
    int arr[]={1,2,3};
    int digitSize=3;
    plusOne(arr,digitSize);
    
}