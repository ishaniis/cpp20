#include<iostream>

using namespace std;

int main(){

    // By default any decimal number is double
    // Until unless mentioned with f or F
    // Long can be described using l or L 
    // Long is 12 bits, double is 8 bits , float is 4 bits

    cout<<"The size of 30.2F: "<<sizeof(30.2F)<<endl;
    cout<<"The size of 30.2f: "<<sizeof(30.2f)<<endl;
    cout<<"The size of 30.2: "<<sizeof(30.2)<<endl;
    cout<<"The size of 30.2l: "<<sizeof(30.2l)<<endl;
    cout<<"The size of 30.2L: "<<sizeof(30.2L)<<endl;

    // Reference Variable Concept

    int a = 3;
    //How the reference variable are utilized, it's the same variable x but now called with different names. 
    int & a_a = a;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a_a is: "<<a_a<<endl;

    //TypeCasting 
    //The process of typecasting is nothing but converting one datatype into another 
    // int -> float 
    //int a -> float(a)
    //float b -> int(b)

    return 0;
}