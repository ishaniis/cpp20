#include <iostream>
using namespace std;

class base
{
public:
    //Public Variables
    int id;
    //Initalizing empty contructor
    base() {}

    base(int num)
    {   
        id = num;
        cout << "The input to the constructor is: " << num << endl;
    }
    
    int id_2;
    
    void setData(){
        cout<<"Set the value for id_2"<<endl;
        cin>>id_2;
    }

    void getData_1(){
        cout<<"Number is: "<<id_2<<endl;
    }
};

class derived_class : public base
{
private:

public:
    int languageCode;
 
    derived_class(int num2){
        num2 = languageCode;
        cout<<"The display from the derived class is:"<< (2 * num2) <<endl;
    }
    
    // void getData(int id){
    //     cout<<"The id number of the input in the derived class is:"<<id<<endl;

    // }

};


int main()
{
    base g1, g2(2);
    g2.setData();
    g2.getData_1();
    derived_class g3(10);
    g3.setData();
    g3.getData_1();

    return 0;
}