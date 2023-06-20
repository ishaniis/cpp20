#include<iostream>

using namespace std;

int main(){
    /*
    Loops in Cpp
    Three types of loop in Cpp
    - While loop
    - For loop
    - Do While loop
    */

   //First we'll work towards for loop
   //for loop
   //syntax for the for loop

   /*
    for(initialization condition; condition; updation/increment)
    {
        loop body(Cpp code);
    }
   */

    /*
    for(int i =1; i<=100; i++)
    {
    cout<<(i)<<endl;
    }
    
    */

    //While loop

    //While Syntax
    /*
    while(condition){
        C++ Statement;
    }
    */

   /*
   int i = 1;
   while(i<=40){
       cout<<i<<endl;
       i++;
   }
    */

   //Do while loop
   //Syntax
    /*
    do 
    {

    }
    while(Condition)
    */

    int i =1;
    cout<<"We'll write the table of 6:"<<endl;
    do
    {   
        
        cout<<"6 X "<<i<<":"<<i*6<<endl;
        i++;
    } while (i<=40);
    

    return 0;
}