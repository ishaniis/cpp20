#include<iostream>
using namespace std;

class test2;

class test1
{
private:
    int num1;
public:
    friend void swapData(test1 &x, test2 &y);
    void setData(int value){
        num1 = value;
    }

    void displayData(void){
        cout<<"The value of data is: "<<num1<<endl;
    }
 
};

class test2
{
private:
 int num2;   
public:
    friend void swapData(test1 &x, test2 &y);
    void setData(int value){
        num2 = value;
    }

    void diplayData(void){
        cout<<"The value of data is:"<<num2<<endl;
    }

};

void swapData(test1 &x, test2 &y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}

int main(){
    
    test1 oc1;
    test2 oc2;

    oc1.setData(33);
    oc1.displayData();

    oc2.setData(67);
    oc2.diplayData();

    swapData(oc1, oc2);
    cout<<"The value of the data after being exchanged"<<endl;
    oc1.displayData();
    oc2.diplayData();

return 0;
}