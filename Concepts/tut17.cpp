#include<iostream>
using namespace std;

//Using the inline function
//It's request to compiler to run one single line
// It's recommended only one line operations to be utilized using inline function utility.
inline float productcal(int a, int b){
    return a*b;
}

int interestcal(int principal, float rate=1.04){
    return principal*rate;
}

int main(){

    int p, q, pr;
    float ra;
    cout<<"The two numbers are:"<<endl;
    cout<<"First number: "<<endl;
    cin>>p;
    cout<<"Second Number:"<<endl;
    cin>>q;

    cout<<"The product of the number is:"<<productcal(p,q)<<endl;
    cout<<"Now the interest calculated is"<<interestcal(100000)<<endl;
    

    return 0;
}