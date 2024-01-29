#include<stdio.h>
int main(){
    if (sizeof(int)>-1){
        printf("True\n");
    } else {
        printf("false\n");
    }
    return 0;
}
// sizeof() return unsigned in integer
// comparision of -1 that is signed interger with unsigned interger happens here
// -1 get type casted to unsigned integer which is equal to 0xFFFFFFFFFFF.... which is very large number
// hece ans is false