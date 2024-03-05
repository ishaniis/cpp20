#include<iostream>
#include<string>

using namespace std;

/*Basic Structure of this program:
We'll have threee classes:
1. 1 Parent Class & 2 Child classes inheriting the parent class

2. If a Virtual function is already defined in the base class, there exists no need to define the virtual function again 
in the child class as well. 
    
*/
class Parent{
    protected:
        string parents_name;
        float parents_age;

    public:
        Parent(string a, float b){
            //Now, assigning the parameters to our protected variables accordingly
            parents_name = a;
            parents_age = b;
        }
        //Just an implementation of the virtual function (Pure)
        virtual void display(){

        }
};

class Child1_bio : public Parent{
    
    protected:
        string child1s_name;
        float child1s_age;
        

    public:
        Child1_bio(string a, float b, string c, float d):Parent(a, b){
            child1s_name = c;            
            child1s_age = d;
        }
        void display(){
            cout<<"Name of the child is: "<< child1s_name <<" Name of the parent is: "<< parents_name<< endl;
            cout<<"The age of the Parent is: "<<parents_age<<endl;
            cout<<"The age of the child is: "<<child1s_age<<endl;
            
        }
};

class Child1_academic_details: public Parent{
    protected:
        string child1s_school_name;
        string child1s_favorite_subject;

    public:
        Child1_academic_details(string a, float b,string e, string f):Parent(a,b){
            child1s_school_name = e;
            child1s_favorite_subject = f;
        }

        void display(){
            cout<<"Name of the school where the kids study: "<< child1s_school_name<<endl;
            cout<<"Kid's favorite subject: "<< child1s_favorite_subject <<endl;
        }

};

int main(){
    cout<<"In this cpp file, we'll go over a detailed implementation of virtual functions"<<endl;
    cout<<"We'll also discuss hwo they are being used in a Object oriented programming enviornemnt"<<endl;

    string Parents_name;
    float Parents_age;
    string Childs_name;
    float Childs_age;

    Parents_name = "Alicia Roberts";
    Parents_age = 39;

    Childs_name = "Amira Robers";
    Childs_age = 12;
    
    Parent *test_ptr[2];
    Child1_bio test1(Parents_name, Parents_age, Childs_name, Childs_age);
    Child1_academic_details test2(Parents_name,Parents_age,"IIS","Physics");
    
    test_ptr[0] = &test1;
    test_ptr[1] = &test2;

    cout<<"****************"<<endl;
    cout<<"Running the virtual function with base class pointer pointing towards the object of Child1_bio"<<endl;
    cout<<"****************"<<endl;
    test_ptr[0]->display();

    cout<<"****************"<<endl;
    cout<<"Running the virtual function with base class pointer pointing towards the object of Child1_academic_details"<<endl;
    cout<<"****************"<<endl;
    test_ptr[1]->display();

    return 0;
}