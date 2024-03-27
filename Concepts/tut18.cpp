
#include<iostream>
using namespace std;

int fibterm(int n)
{   
    if (n==0){
        return 0;
    }
    else if (n<=2 & n!= 0){
        return 1;
    }
    return fibterm(n-2) + fibterm(n-1);
}

bool printfibseries(int n){

    int firstterm = 0;
    int secondterm = 0;
    int finalterm = 0;

    for (int i = 0; i <= n ; i++){
        cout<<fibterm(i)<<",";
    }
    cout<<"."<<endl;
    return true;
}

int main(){
    
    int num = 10;
    cout<<"Fib term for"<<num<<" term is"<<fibterm(num)<<endl;
    cout<<"Print the series"<<printfibseries(num);

    return 0;
}
