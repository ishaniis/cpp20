#include <iostream>
using namespace std;

class Base
{
private:
    int data1;/* data */
public:
    int data2;
    int getData1();
    int getData2();
    void setData();

    Base() {

    };
 
};

 void Base :: setData(){
    data1 = 10;
    data2 = 20;

 }

//getData1
int Base :: getData1(){

    return data1;
}

//getData2
 int Base :: getData2(){

    return data2;
 }

class Derived_class : public Base 
{
private:
    //int data3;
public:
    int data3;
    void process();
    void display();

    Derived_class() {};
};

void Derived_class :: process(){
    data3 = data2 * getData1();
}

void Derived_class :: display(){
    cout<<"The Data1 is:"<<getData1()<<endl;
    cout<<"The Data2 is:"<<data2<<endl;
    cout<<"The value of data3 is:"<<data3<<endl;
}

int main()
{   
    Derived_class test1;
    test1.setData();
    test1.process();
    test1.display();
    return 0;
}