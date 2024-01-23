#include<iostream>
using namespace std;
int main(){
    int arr1[5];
    arr1[0]=1;
    arr1[1]=2;
    arr1[2]=3;
    cout<<"size of int " <<sizeof(int)<<endl;
    cout<<sizeof(arr1)<<endl;   // 5 elements * 4 = 20 bytes
    cout<<arr1[1]<<endl;
    printf("index 4 = %d\n",arr1[3]);

    int arr2[10]={10,20,30,40,50,60,70};
       cout<<"size of int " <<sizeof(int)<<endl;
    cout<<sizeof(arr2)<<endl;   // 5 elements * 4 = 20 bytes
    cout<<arr2[1]<<endl;
    printf("%d\n",arr2[2]);
    printf("index 9 val =%d\n",arr2[9]);
    cout << "printing the Array"<<endl;
    for (int x:arr2){
        cout<<x<<endl;
    }
    return 0;
}