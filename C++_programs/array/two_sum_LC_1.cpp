// https://leetcode.com/problems/two-sum/description/

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<map>

using namespace std;

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


int* using_hashmap(int* nums, int len, int target, int* return_size){
    map <int,int> dict;
    int* output=(int *)malloc(*return_size*sizeof(int));
    for (int i =0;i<len;i++){
        if(dict.count(target-nums[i])){
            output[0]=dict[target-nums[i]]-1;
            output[1]=i;
            return output;
        }
        dict[nums[i]]=i+1;
    }
}

void print_output(int* arr,int* len){
    for(int i=0;i<*len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int output_size=2;
    int arr1[]={2,7,11,15}, target1=9;
    int* output1;
    output1= using_bruteforce_method(arr1,sizeof(arr1)/sizeof(int),target1,&output_size);
    print_output(output1,&output_size);



    int* output2;
    int arr2[]={10,2,3,4,23,11,7}, target2=34;
    output2=using_hashmap(arr2,sizeof(arr2)/sizeof(int),target2,&output_size);
    print_output(output2,&output_size);
    return 0;
}