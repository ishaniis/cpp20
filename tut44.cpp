#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Basic Syntax
vector <data_type> name_of_the_Vector
*/
void display(vector<int> &v){
    cout<<"The elements inside the vector are: "<<endl;
    for(int i=0; i<v.size();i++){
        // sort(v.begin(),v.end());
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

void sort_the_vector(vector<int> &c){
    sort(c.begin(),c.end());
    cout<<"Sorting Operation complete"<<endl;
}

void use_of_iterator(vector<int> &v, int value_of_number_to_insert){
    vector <int> :: iterator iter;
    iter = v.begin();
    v.insert(iter, value_of_number_to_insert);


}

int main(){
    cout<<"In this tut44, we'll implement and work with std::vectors"<<endl;
    vector<int> vec1;

    int element,size_of_vector;
    
    cout<<"Enter the size of the vector"<<endl;
    cin>>size_of_vector;
    vector<int> vec2(size_of_vector);
    cout<<"Vector Declaration Complete"<<endl;
    // size_of_vector =2;
    cout<<"Declared size of the vector is: "<<size_of_vector<<endl;
    
    for(int i =0; i<size_of_vector;i++)
    {
        cout<<"Enter the element: "<<endl;
        cin>>element;
        vec2[i] = element;
        // vec2.push_back(element);
    }
    sort_the_vector(vec2);
    display(vec2);
    vec2.pop_back();
    display(vec2);

    use_of_iterator(vec2,45);
    display(vec2);
    sort_the_vector(vec2);
    display(vec2);
    return 0;
}