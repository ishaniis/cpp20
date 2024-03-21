#include<iostream>
#include<list>
using namespace std;

void display_list(list<int> &l){

    list <int> :: iterator it_list;

    for(it_list = l.begin(); it_list != l.end();it_list++){
        cout<<*it_list<<" ";
    }
    cout<<" "<<endl;
}

int main(){
    cout<<"We'll be touching the topic lists in this tut45"<<endl;

    /*
    Why Lists?
    What is Lists ?

    - A bi-direction linear storage
    - Different from Vector: Vector is Continous memory allocation are used as dynamic arrays, for utilities the data modality and size can dynamically change
    - Lists on the other hand, are not stored as continous memory block, which gives them some disadvantages and advantages

    - Advantages of using Lists:
    - - Faster Insertion Operation
    - - Faster Deletion Operation

    - Disadvantages of using Lists:
    - - Slower Random access, because all the elements of the lists are stored at different locations. 

    Insertion of elements in Array is - TIME CONSUMING, but Lists is just a series of pointers linking each other, so inserting elements doesn't 
    leads to shifting elements,rather just changing the order of the pointer of the elements - in the order they are being called in the execution block.

    */

   /*
   Basic Syntax:
   list <data_type> name_of_the_list
   */

    list <int> l1;
    int size_of_list;
    int value_of_the_element;
    cout<<"Enter the size of the list: "<<endl;
    cin>>size_of_list;

    for (int i=0; i<size_of_list; i++){
        cout<<"Enter the value:"<<endl;
        cin>>value_of_the_element;
        l1.push_back(value_of_the_element);
    }

    display_list(l1);
    l1.sort();
    cout<<"List after it has been sorted"<<endl;
    display_list(l1);
    return 0;
}