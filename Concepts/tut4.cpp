#include<iostream>

using namespace std;

int main(){
    int x_input, y_input;
    // >> Extraction Operator: What ever the input is given from the user, just take it. 
    // << Insertion Operator: What ever output is there, just spit it out
    cout<<"The value of x_input is:";
    cin>>x_input;
    cout<<"The value of y_input is:";
    cin>>y_input;
    cout<<"The sum is: "<< x_input + y_input<<endl;

    return 0;
}