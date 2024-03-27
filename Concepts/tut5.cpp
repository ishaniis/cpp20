#include<iostream>
#include "this.h"
using namespace std;

int main(){
    int a=3, b=4;

    cout<<"Addition is:"<<a+b<<endl;
    cout<<"Subtraction is:"<<a-b<<endl;
    cout<<"Divide is:"<<a/b<<endl;
    cout<<"Multiply is:"<<a*b<<endl;
    cout<<"Modulus Operator:"<<a%b<<endl;
    cout<<"a++: "<<a++<<endl;
    cout<<"a--: "<<a--<<endl;
    cout<<"--a: "<<--a<<endl;
    cout<<"++a: "<<++a<<endl;

    return 0;
}