#include<iostream>
#include<complex>
#include<iomanip>

using namespace std;

class complex_number
{
    int re;
    int img;

public:
    void take_arg(int a, int b)
    {
        re = a;
        img = b;
    }
    
    void print_comp(void)
    {
        cout<<"The number is:"<<endl;
        cout<<"Number: "<<re<<" + "<<img<<"i"<<endl;
    }
    void sum_comp(complex_number c1, complex_number c2)
    {
        re = c1.re + c2.re;
        img =  c1.img + c2.img;
    }
};


int main(){

complex_number c1, c2, c3;

c1.take_arg(1,2);
c1.print_comp();

c2.take_arg(3,4);
c2.print_comp();

c3.sum_comp(c1,c2);
c3.print_comp();


return 0;
}