#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    int salary;
    static int count;

public:
 void setId(void);
 void getId(void);
 
 void static getCount(void){
     cout<<"The total count is:"<<count<<endl;
 }

 };


void employee:: setId(void){
    cout<<"Enter the id of the employer"<<endl;
    cin>>id;
    count++;
}

void employee::getId(void){
    cout<<"The id of the employee is: "<<id<<endl;
}

int employee:: count = 0; 

 int main()
 {
    //Setting up multiple objects in the classes 
    employee ann[4];

    for (int i = 0; i < 4; i++)
    {
        ann[i].setId();
        ann[i].getId();
    }
    
    employee::getCount();

    return 0;

 }

