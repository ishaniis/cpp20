#include<iostream>
using namespace std;

class id
{
private:
    int id;
    static int count;
public:
    void setData(void);
    void getData(void);
    static void getCount(void);
};

void id :: setData(void){
    cout<<"Enter the id of the employee"<<endl;
    cin>>id;
    count++;
}

void id:: getData(void){
    cout<<"Id of the employee is"<<id<<"/t The employee number is:"<<count<<endl;
}

void id:: getCount(void){
    cout<<"The value of the count is:"<<count<<endl;

}

int id:: count;

int main(){

    id Ishan, Shaimak, Pratuyush;

    Ishan.setData();
    Ishan.getData();
    
    // id::getCount();

    Shaimak.setData();
    Shaimak.getData();
    // id::getCount();

    Pratuyush.setData();
    Pratuyush.getData();
    id::getCount();
    
return 0;
}