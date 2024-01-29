#include<iostream>
#include<stdio.h>
using namespace std;

template <class T>    // this is to pass the data type as a parameter so that 
                      //we don’t need to write the same code for different data types
class Arithmatic{
    private:
        T a;
        T b;
    public:
        Arithmatic(T a, T b);
        T sum();
        T subtract();

    };

template<class T>
Arithmatic<T>::Arithmatic(T a, T b)
{ 
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmatic<T>::sum(){
    return a+b;
}
template<class T>
T Arithmatic<T>::subtract(){
    return this->a-this->b;
}


int main(){
    Arithmatic<int> r1(10,5);
    cout<<"sum= "<<r1.sum()<<endl;
    cout<<"subtract= "<<r1.subtract()<<endl;

    Arithmatic<float> r2(40.23,32.2);
    cout<<"sum= "<<r2.sum()<<endl;
    cout<<"subtract= "<<r2.subtract()<<endl;  
}