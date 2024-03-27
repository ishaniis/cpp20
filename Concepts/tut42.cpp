#include<iostream>
#include<string>

using namespace std;

//Again we'll practice the concept of Templates in classses with one more example. 

template <class User_defined_type>
class vector{

    public:
        User_defined_type *arr;
        int size_of_vector;

        //Constructor Declaration
        vector(int m){
            size_of_vector = m;
            arr = new User_defined_type[size_of_vector];
        }

        //Lets' Implement a member function to implement dotproduct
        int dot_product(vector &v){
            User_defined_type sum = 0;
            for(int i=0; i<size_of_vector; i++){
                sum += this->arr[i]*v.arr[i];
            }
            return sum;
        }        
};

int main(){

    vector <float> test1(2);
    test1.arr[0] = 2.3;
    test1.arr[1] = 3.3;

    vector <float> test2(2);
    test2.arr[0] = 1.2;
    test2.arr[1] = 3.2;

    float result = test1.dot_product(test2);
    cout<<"The result of the dot product is: "<< result<<endl;

    return 0;
}