#include<iostream>
using namespace std;

struct employee
    {
        int eID;
        char favChar;
        float salary;
    };

typedef struct employee_estar
{
    int eID;
    char favChar;
    float salary;
} ep; 

union money
{
    //Only lets you use only once at the time, 
    int dollars;
    char cars;
    float pount;
};


int main(){
    enum Meal{Lunch, Breakfast, Dinner};
    Meal m2 = Lunch;
    cout<<"Value of m1 is: "<<m2<<endl;
    struct employee harry;
    struct employee shubham;
    struct employee_estar Noaman;
    ep ajay;

    union money m1;
    m1.dollars = 1000000;
    m1.pount = 1245600000;
    cout<<"Dollars is equivalent to:"<<m1.dollars<<endl;
    cout<<"Pounds is equivalent to: "<<m1.pount<<endl;
    harry.eID = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;

    ajay.eID = 2;
    ajay.favChar = 'd';
    ajay.salary = 14000000;

    cout<< "Harry's id "<< harry.eID << " Harry's favchar: "<<harry.favChar<<" Harry's Salary: "<<harry.salary<<endl;
    cout<<"Ajay's id is: "<<ajay.eID<<" Ajay's favChar is:"<<ajay.favChar<<" Ajay's Salary: "<<ajay.salary;


    return 0;
}