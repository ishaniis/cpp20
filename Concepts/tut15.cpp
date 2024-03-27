#include<iostream>
using namespace std;

int sum(int a , int b){

    int add = a + b ;
    return add;
};

//Function Prototyping
float avg(int c,int d);

int main(){
    int num1, num2, result;
    float mean;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

    result = sum(num1, num2);
    cout<<"Sum is: "<<result<<endl;

    mean = avg(num1,num2);
    cout<<"Mean is: "<<mean<<endl;


    return 0;
}

float avg(int c, int d){

    float average = 0.5*(c + d);
    return average;
}