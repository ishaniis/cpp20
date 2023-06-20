#include<iostream>

using namespace std;
int glob_c = 45;

int main(){
    int glob_a, glob_b, glob_c;

    cout<<"The value of glob_a is:"<<endl;
    cin>>glob_a;
    cout<<"The value of glob_b is:"<<endl;
    cin>>glob_b;
    glob_c = glob_a + glob_b;
    cout<<"Sum is:"<< glob_c <<endl;
    cout<<"Global scope of the variable is:"<<::glob_c<<endl;

    return 0;
}