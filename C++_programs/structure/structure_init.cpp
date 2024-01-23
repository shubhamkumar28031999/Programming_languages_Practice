#include<iostream>
#include<string>
using namespace std;
struct ractangle{
    int length;
    int breadth;
};

struct student{
    string name;
    int roll_no;
} s1,s2,s3,s4,s5;  // defined globally

int main (){
    struct ractangle r1;
    cin>>r1.length>> r1.breadth;
    cout<<"length="<<r1.length<<"  Breadth="<<r1.breadth<<endl;
    cout<<"size of r1= "<< sizeof(r1)<<endl;

    struct ractangle r2={30,40};
    cout<<"length="<<r2.length<<"  Breadth="<<r2.breadth<<endl;
    
    ractangle r3={30,40};  // in cpp no need to specify "struct" before  rectangle while in C lang. we need to
    cout<<"length="<<r3.length<<"  Breadth="<<r3.breadth<<endl;

    struct ractangle arr_of_rec[10];
    cout<<"size of array of rectangle="<< sizeof(arr_of_rec)<<endl;
    s1.name="subham";
    s1.roll_no=10;
    cout<<"name of student "<<s1.name<<" roll no. is "<<s1.roll_no<<endl;


    return 0;
}

