#include<iostream>
using namespace std;

class Y_test;

class X_test
{
    private:
    int data; 
    public:
    friend void add(X_test, Y_test);
    void setData(int value)
    {
        data = value;

    }

};

class Y_test
{
private:
int num;
   
public:
friend void add(X_test, Y_test);
void setData(int value){
    num = value;
}
 
};

void add(X_test o1, Y_test o2){
    cout<<"Summing the data: "<< o1.data + o2.num <<endl;


}

int main()
{
//Advanced Concept of Friends functions and CLasses  

X_test a;
a.setData(46);

Y_test b;
b.setData(67);

add(a, b);

return 0;
}