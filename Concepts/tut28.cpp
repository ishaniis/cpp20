#include<iostream>
using namespace std;

class complex
{
private:
    int a , b;
public:
    complex(int, int);
    
    complex(int a){
        a =3;
    }

    void printdata(){
        cout<<"the value of variables are"<<a<<"\t"<<b<,endl;
    }
};

complex :: complex(int a, int b)
{
    a = 3;
    b = 4;
}


int main(){

complex c1(2);
c1.printdata();


return 0;
}