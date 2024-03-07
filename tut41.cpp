#include<iostream>
#include<string>

using namespace std;

/*
In this cpp file, we are discussing the concept of the Templates, How to use the concept of templates
to effectively practice the concept of DRY

In this attempt, it gives us flexibility to work with the below class - template_concept, to work with 
different data types, which can be streamlined by the concept of template. 
*/

template <class T_delta>
class template_concept
{
    public:
    T_delta *arr;
    T_delta input_var;
    int x;
    
    template_concept(T_delta a){
        cout<<"We'll setup the value here:"<<endl;
        input_var = a;
        arr = new T_delta[a];
    }

    void display(){
        cout<<"The value of the var is:"<<input_var<<endl;
    }
    void set_pointer(){
        for (int i =0; i < input_var; i++){
            cout<<"Enter the value:"<<endl;
            cin>>x;
            arr[i] = x;
        }
    }

    void display_pointer(){
        cout<<"*********"<<endl;
        cout<<"Display:"<<endl;
        cout<<"*********"<<endl;
        for (int i=0; i < input_var; i++){
            
            cout<<arr[i]<<endl;
        }
    }
};


int main(){
    template_concept <int> test(2);
    test.display();
    test.set_pointer();
    test.display_pointer();
    return 0;
}