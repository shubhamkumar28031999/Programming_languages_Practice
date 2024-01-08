#include<stdio.h>
#include<ctype.h>
#include<string.h>

bool isPalindrome(char * s){
    int l= strlen(s);
    int left=0;
    int right=l-1;
    for(int j=0;j<l;j++){
        s[j]=tolower(s[j]);
    }
    // while (right>left){
        
    // }
    return true;
}
int main(){
    char a[]="Hello Subh";
    check(a);
}