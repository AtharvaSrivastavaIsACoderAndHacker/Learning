#include<iostream>
using namespace std;

class Employee{
    public:
        int salary;
        static int sumOfSalary(Employee a, Employee b){
            return a.salary + b.salary;
    }
        
};

int main(int argc, char const *argv[]){
    
    Employee Atharva;
    Employee Ishi;

    int salaryyy; 
    cin>>Ishi.salary;
    cin>>Atharva.salary;

    cout<<"Sum of salary = "<<(Employee::sumOfSalary(Atharva, Ishi))<<endl;//this approach is useless but it's just to demonstrate objs as args
    
    return 0;
}