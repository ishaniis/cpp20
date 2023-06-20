#include<iostream>

using namespace std;

int main(){
    cout<<"This is new tutorial about Control structures"<<endl;

    //Loop Control Structure implementation using if-else if -else ladder
    // int age;
    // cout<<"Tell me about your age?:"<<endl;
    // cin>>age;

    // if (age<18){
    //     cout<<"You are not adult";
    // }
    // else if (age==18){
    //     cout<<"Just an adult";
    // }
    // else{
    //     cout<<"Adult, Welcome to the program!";
    // }

    // Selection control structure: Switch-Case (Loop)
        int age;
        cout<<"Enter your age?: "<<endl;
        cin>>age;
        
        switch (age)
        {
        case 18:
            cout<<"You are an adult."<<endl;
            break;
        
        case 22:
            cout<<"You are an adult & age 22."<<endl;
            break;

        default:
            cout<<"No special case"<<endl;
            break;
        }
        cout<<"Out of the Switch Case"<<endl;
        cout<<"Thank You"<<endl;
    return 0;
}