#include<iostream>
#include<cmath>
using namespace std;

class Baseclass1
{
public:
    int dummy_var;
    int set_var;
    Baseclass1(int data1){
        dummy_var = data1;
        cout<<"You're inside the Baseclass1"<<endl;
    };

    void getOutput_b1(){
        cout<<"The value of the variable in BaseClass1 is:"<<dummy_var<<endl;
    }
    
    void setVar(){
        set_var = dummy_var * 4;
        cout<<"The value of the special variable is:"<<set_var<<endl;        
    }

};

class Baseclass2
{
private:
    int data2;
public:
    int dummy_var_2;
    Baseclass2(int data2){
        dummy_var_2 = data2;
        cout<<"You're inside the Baseclass2"<<endl;
    }
    
    void getOutput_b2(){
        cout<<"The value of the variable in BaseClass2 is:"<<dummy_var_2<<endl;
    }
};

class derived_base_class: public Baseclass2, virtual public Baseclass1
{
private:

public:
    int derived_var = set_var;
    derived_base_class(int a , int b): Baseclass1(a), Baseclass2(b)
    {
        cout<<"You're inside the derived class"<<endl;
    }

    void getOutput_derived(){
        cout<<"The value of the special variable is:"<<derived_var<<endl;
    }

};




int main(){
    // cout<<"First test in the new setup"<<endl;
    // Baseclass2 b2(2);
    // b2.getOutput_b2();

    derived_base_class d1(3,4);
    d1.setVar();
    d1.getOutput_derived();
    return 0;
}