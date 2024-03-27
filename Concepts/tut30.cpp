#include<iostream>
using namespace std;

int counter=0;

class numer{

    public:
        //Defining the constructor 
        numer(){
            counter++;
            cout<<"Intializing the constructor for the:"<<counter<<"time"<<endl;
        }

        ~numer(){
            cout<<"************************"<<endl;
            cout<<"**Destructor Activated**"<<endl;
            cout<<"************************"<<endl;
            cout<<"Destructor is called, to destroy the object number:"<<counter<<endl;
            counter--;
        }

};


int main()
{
    cout<<"Let's start the main body"<<endl;
    cout<<"Let's create the object number: n1"<<endl;
    numer n1;

    {
        cout<<"Let's create two more objects: n2 and n3"<<endl;
        numer n2, n3;

    }


    return 0;
}