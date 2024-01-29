// https://leetcode.com/problems/two-sum/description/

#include<stdio.h>
#include<stdlib.h>

int* using_bruteforce_method(int* nums, int len, int target, int* return_size){

    int* output=(int *)malloc(*return_size*sizeof(int));
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if (nums[i]+nums[j]==target){
                output[0]=i;
                output[1]=j;
                return output;
            }
        }
    }
}



void print_output(int* arr,int* len){
    for(int i=0;i<*len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int output_size=2;
    int arr1[]={2,7,11,15}, target1=17;
    int* output1;
    output1= using_bruteforce_method(arr1,sizeof(arr1)/sizeof(int),target1,&output_size);
    print_output(output1,&output_size);

    return 0;
}