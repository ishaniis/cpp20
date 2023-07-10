#include<iostream>
using namespace std;

//Declaration of the class complex exists.
class complex;

class calculator
{
private:
int o1=0 , o2 = 0;
    
public:
    //Just declaring the method/function 
    //Working of the function/method discussed after the declaration of the class complex. 
    int sum_real(complex, complex);
    int sum_com(complex , complex);    
};


class complex
{
private:
    friend int calculator :: sum_real(complex, complex) ;
    friend int calculator :: sum_com(complex, complex);
public:
    int real, img ;
    void set_number( int p, int q){
        real = p;
        img = q;
    }

    void print_numbers(){
        cout<<"The Number is:"<<real<<" + "<<img<<"i"<<endl;
    }
};

int calculator::sum_real(complex o1, complex o2){
   
   return (o1.real + o2.real);
}

int calculator :: sum_com(complex o1, complex o2){
    return (o1.img + o2.img);
}

int main()

{   
    complex j1, j2,r1;
    j1.set_number(1,2);
    j1.print_numbers();
    
    j2.set_number(3,4);
    j2.print_numbers();

    calculator r2;
    int result_real = r2.sum_real(j1,j2);
    int result_img = r2.sum_com(j1, j2);

    cout<<"The sum of the real numbers is:"<<result_real<<endl;
    cout<<"The sum of the img numbers is:"<<result_img<<endl;


    return 0;
}