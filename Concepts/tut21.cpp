#include<iostream>
#include<string>

using namespace std;

class binary
{
private:
    /* data */
public:
    string b;
    void read_binary();
    void check_binary(void);
    void ones_complement(void);
    void display_binary(void);
};

void binary:: read_binary(void)
{
    cout<<"Enter the binary number"<<endl;
    cin>>b;
    
}

void binary:: check_binary(void)
{
    for (int i = 0; i < b.length(); i++)
        {
        if (b.at(i) == '1' or b.at(i) == '0')
            {
               continue;
            }
        else
        {
            cout<<"Invalid Input, not a binary input"<<endl;
            break;
        }
        }
}

void binary :: ones_complement(void)
{
   
    for(int i = 0; i< b.length(); i++){

        if (b.at(i)=='1'){
            b.at(i) = '0';
        }
        else{
            b.at(i)='1';
        }
    }

}

void binary:: display_binary(void)
{
    cout<<"The input is: "<<endl;;
    for (int i = 0; i < b.length(); i++)
        {
        cout<<b.at(i);
        }
    cout<<""<<endl;
}


int main(){

binary check1;
check1.read_binary();
check1.check_binary();
check1.display_binary();
check1.ones_complement();
check1.display_binary();
    
return 0;
}