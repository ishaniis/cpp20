#include<iostream>
using namespace std;

class base
{   public:
        void base1();
};

void base::base1()
{
    cout << "Hey, How is it going?!!"<<endl;
}

class base2{
    public:
        void base1();
};

void base2:: base1(){
    cout<<"Let's go, Man!"<<endl;
}

class derived: public base, public base2 {

    public:

        void base1(){
            base :: base1();
        };
};

int main()
{
    base b1;
    base2 b2;
    derived d1;

    d1.base1();
    return 0;
}