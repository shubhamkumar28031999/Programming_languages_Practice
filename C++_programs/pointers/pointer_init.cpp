#include<iostream>

using namespace std;
int main(){
    int a=100;
    int* ptr2=&a;
    printf("address of ptr2= %p\n",ptr2);
    printf("derefrencing of ptr2= %d\n",*ptr2);

    int *ptr1=new int[5];    // dynamic memory allocation  # allocated in heap memory;

    ptr1[1]=10;
    ptr1[0]=5;
    cout<<"index 0 = "<< ptr1[0] <<endl;
    free(ptr1);

    int* arr1 = new int[5];
    arr1[0]=10;
    arr1[1]=20;
    printf("address of arr1 = %p\n",arr1);
    printf("address 2nd index of arr1 = %p\n",&arr1[1]);
    printf("size of arr1 = %lu\n",sizeof(arr1));
    printf("size of intiger pointer= %lu\n",sizeof(int *));
    printf("value at position 0 =%d\n",arr1[0]);
    delete [] arr1;
    int ara[] = {1, 1, 2, 3, 5, 8, 13, 21};
    int size = *(&ara + 1) - ara;
    cout << "This array has " << size << " elements\n";
    cout<<"size of ara "<<sizeof(ara)<<endl;      // sizeof(int)*len(ara)=32
    cout<<"address of ara "<< &ara<<endl;
    cout<<"last index address of ara "<< &ara[7]<<endl;
    cout<<"next address of ara "<<(&ara + 1)<<endl;
    return 0;
}