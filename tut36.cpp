#include <iostream>
using namespace std;

class shopItem
{
private:
    int id;
    float price;
public:
    void setData(int a , float b){
        id = a;
        price = b;
        cout<<"The price has been set"<<endl;
    }
    
    void getData(){
        cout<<"The id of the listed ShopItem is:"<<id<<endl;
        cout<<"The price of the listed ShopItem is:"<<price<<endl;
    }
    
};


int main(){
    
    cout<<"Demonstrating using pointers in Classes"<<endl;
    cout<<"Calling the object ShopItem"<<endl;

    shopItem *ptr = new shopItem[3];
    shopItem *ptr_temp = ptr;
    
    //Input Variables and setting up variables
    int p;
    float q;
    int size = 3;


    //Invocation using setData function of the class
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id of the listed ShopItem"<<endl;
        cin>>p;
        cout<<"Enter the price of the listed ShopItem"<<endl;
        cin>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p,q);
        ptr++;        
    }

    //Now using this loop printout the data
    for (int i = 0; i < size; i++)
    {
        cout<<"Item Number"<<endl;
        ptr_temp->getData();
        ptr_temp++;
    }
    
    
    
    return 0;
}