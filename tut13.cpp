#include<iostream>
using namespace std;

int main(){

    int marks[4] = {23,45,56,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
        
    //New Array
    int marks_newarray[4];
    marks_newarray[0]=0;
    marks_newarray[1]=10;
    marks_newarray[2]=20;
    marks_newarray[3]=40;

    cout<<"New array"<<endl;
    cout<<marks_newarray<<endl;

    cout<<"With for loop"<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks for "<<i<<"is: "<<marks_newarray[i]<<endl;
    }
    
    cout<<"With while loop"<<endl;

    int j;
    while (j < 4)
    {
        cout<<"The marks for "<<j<<"is: "<<marks_newarray[j]<<endl;
    }
    
    //Pointer Arithmetic
    //(address)new = (address)current + i*size(data type)
    // p + i = p + i * 4

    //Pointers and Arrays
    //pointer p variable which is equivalent to marks array
    int *p = marks;
    cout<<"The value of marks[0] is: "<<*p<<endl;
    cout<<"The value of *(p+1) is: "<<*(p + 1)<<endl;
    cout<<"The value of *(p+2) is: "<<*(p + 2)<<endl;
    
    return 0;
}