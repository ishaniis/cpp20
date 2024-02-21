#include <iostream>
using namespace std;

class base1
{
public:
    int b;
    //int a, b;
    base1(){};
//
// base1 & base1(intb) -> b.getdata()
    // base1(int b){
    //     // b = base1;
    //     // base(int b1)
    //     // In the below statement we're implicitly referring to the pointer of b,
    //     //rather than doing it explicitly. 
    //     // b = b1; 
    //     // cout<<"The setvalues are:"<<b<<endl;
        
    //     //Implicitly referring to the pointer b, which is an object of class b1
    //     this->b = b;
    // }

    void setData(int b){
        this-> b = b;
    }
    void getData(void){
        cout<<"The setvalues are:"<<b<<endl;
    }

    //Making setdata(3).getdata() -> possible (As this is making setdata an object to call member functions)
    // base1 & setdata(int b){
    //     this-> b = b;
    //     return *this;
    // }
};

int main()
{
    base1 a;
    a.setData(3);
    a.getData();

    // a.setdata(5).getData();

    return 0;
}