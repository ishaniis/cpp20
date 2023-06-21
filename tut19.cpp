#include<iostream>
using namespace std;

//Concept of Function Overloading
int area(int a , int b){

    return (a * b);
}

int area(int a){
    return (6*a*a);
}


int main(){
    cout<<"The area of the rectangle is:"<<area(3,2)<<endl;
    cout<<"The Total Surface area of the cube is:"<<area(6)<<endl;

    return 0;
}