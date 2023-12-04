#include<iostream>
#include<math.h>
using namespace std;

class scientific_calculator
{
    private:
    
    public:
        scientific_calculator(){};
        
        const float pi = 3.14;
        float input_theta;
        double degree, res_sin;
        
        
        double sine_angle_calculator(float y){
            input_theta = y;
            res_sin = sin(input_theta * pi/180);
            
            return res_sin;
        }
};


class classical_calculator
{
    private:

    public:
        classical_calculator(){};
        int var1, var2;
        float res_add;
        int add_operations(int a, int b){
            res_add = a + b;
            
            return res_add;
        }
    
};

class hybrid_calculator : public scientific_calculator, public classical_calculator
{
    public:
        hybrid_calculator(){};
        double res_cos, res_tan;
        double input_theta;
        double cos_angle_calculator(double x){
            input_theta = x;
            res_cos = cos(input_theta * pi / 180);

            return res_cos;

        }

        double tan_angle_calculator(double x){
            res_tan = tan(input_theta*pi/100);

            return res_tan;
        }

};


int main()
{
    hybrid_calculator test_1;
    double mp1 = test_1.add_operations(3,4);
    double mp2 = test_1.sine_angle_calculator(30);
    cout<<mp1<<endl;
    cout<<mp2<<endl;

    
return 0;
}