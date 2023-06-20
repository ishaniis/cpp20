#include<iostream>
using namespace std;

int main()
{
    //Pointer
    //What's the concept
    //A Datatype which helps to store the address of the other data types

    int a = 3;
    //The variable b will hold the address of the a
    // &a - Address of the variable a
    //& - address of the operator
    // * - De-referencing operator

    // & - (Address of ) Operator
    int * b = &a;
    cout<<"Address of the a:";
    cout<< b<<endl;

    // * - Deferencing/Value at operator
    cout<<"The value at b, which is address pointer of a is:"<<*b<<endl;

    //Concept of Pointer to Pointer
    //so b is storing the address of a
    //But b also has it's own address
    //Pointer to pointer variable
    //Storing Address of Address, as b stores a's address, so c is storing the address of b
    int **c = & b;

    cout<<"The value of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"*c is equaivalent to b"<<endl;
    cout<<"First deference to b, other deference to c"<<endl;
    cout<<"The value at address value_at(: "<<**c<<endl;


    return 0;
}