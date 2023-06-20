#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapbyreference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// *a = The value presented at b
// &a = Address of a
void swapbyvalue(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 10;
    int a = 4, b = 6;
    swap(x,y);
    cout<<"The value of x is:"<<x<<" The value of y is:"<<y<<endl;
    swapbyreference(x,y);
    cout<<"swap by reference"<<endl;
    cout<<"The value of x is:"<<x<<" The value of y is:"<<y<<endl;
    cout<<"swap by value"<<endl;
    cout<<"the original value of a is:"<<a<<" The original value of b is:"<<b<<endl;
    swapbyvalue(&a,&b);
    cout<<"The swapped value of a is: "<<a<<" The swapped value of b is:"<<b<<endl;
    return 0;
}