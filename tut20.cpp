#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary, grade, annual_compensation, daily_allowances;
    char address;
    float increment ;

    public:
    int age, type_of_car;
    float work_experience;
    

    void calculatesalary(int sa, float inc){
        salary = sa;
        inc = increment;
        annual_compensation = salary*(1 + (increment/100));
    }

    void calcdailyallowances(int gr, int workexp);
    void getdata(){
        cout<<"Salary is:"<<salary<<endl;
        cout<<"Annual Compensation is:"<<annual_compensation<<endl;
        cout<<"Daily allowance is:"<<daily_allowances<<endl;
    }
};

void Employee :: calcdailyallowances(int gr, int workexp){
    grade = gr;
    work_experience = workexp;
    daily_allowances = (grade)*(work_experience);

}

int main(){
    
    Employee Ishan;
    Ishan.calculatesalary(120000, 5);
    Ishan.calcdailyallowances(3,4.5);
    Ishan.getdata();
    //Concept of OOPS in CPP
    
    return 0;
}