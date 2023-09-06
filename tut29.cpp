#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(){
        a = 0;
        b = 0;
    }

    Complex(int d1, int d2)
    {
        a = d1;
        b = d2;
    }
    
    Complex(int d1){
        a = d1;
        b = 0;
    }

    void printdata(){
        cout<<"the value of variables are"<<a<<" , "<<b<<endl;
    }
};


int main(){

 
Complex c1(5);
c1.printdata();

Complex c2(4,5);
c2.printdata();

Complex c3;
c3.printdata();

return 0;
}