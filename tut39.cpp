#include <iostream>
using namespace std;

class Baseclass
{

public:
    Baseclass()
    {
        cout << "We'll practice the concept of Virtual function in this tut39.cpp" << endl;
    };

    // Declaration of variables
    /*
    We'll practice, the following concepts
    1. Virtual Functions
    2. Pure Virtual Functions - Where and Why do we use them ? and How they help us
    impose a blueprint in the developments
    2.1 How ABC's are connected with Virtual Functions
    */
    int var_base=1;

    // Declaring our first virtual function
    virtual void display()
    {
        cout <<" (1) We're inside the display member function of the baseclass" << endl;
        cout<<" (1) The value of the variable here is: "<<var_base<<endl;
    }
};

class DerivedClass : public Baseclass
{
    public:
    int var_derived=2;

    void display(){
        cout<<" (2) We're inside the display function, which happens to be the member function of the derivedclass"<<endl;
        cout<<"(2) The value of the variable here is: "<<var_derived<<endl;
    }
};

int main()
{
    //Let's make a member out of the derived class
    // DerivedClass der1;
    // der1.display();

    /*
    o/p:
    We'll practice the concept of Virtual function in this tut39.cpp
    (2) We're inside the display function, which happens to be the member function of the derivedclass
    (2) The value of the variable here is: 2
    */

    Baseclass *baseclass_pointer;
    Baseclass base1;
    DerivedClass derive1;

    //Pointer of baseclass saving the object of derived class & Let's see which display is called in this case?>?
    baseclass_pointer = &derive1;
    baseclass_pointer->display();

    /*
    o/p:
    We'll practice the concept of Virtual function in this tut39.cpp
    We'll practice the concept of Virtual function in this tut39.cpp
    (1) We're inside the display member function of the baseclass
    (1) The value of the variable here is: 1
    */

    //Now let's check the output after adding virtual on Line24 (void display() of baseclass)

    /*
    We'll practice the concept of Virtual function in this tut39.cpp
    We'll practice the concept of Virtual function in this tut39.cpp
    (2) We're inside the display function, which happens to be the member function of the derivedclass
    (2) The value of the variable here is: 2
    */
    
    return 0;
}
