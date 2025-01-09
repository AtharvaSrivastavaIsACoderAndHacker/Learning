#include<iostream>
using namespace std;

class Employee{
    int salary;
    bool experienced = false;
    public:
        string name;
        Employee (string, int);
        Employee (string , int , bool);
        void printData(){
          cout<<name<<" | "<<salary;
          if (experienced){
            cout<<" - EXPERIENCED"<<endl;
          }else{cout<<endl;}
        }
};

Employee:: Employee(string n, int s=0){
    this->name = n;
    this->salary = s;
}
Employee:: Employee(string n, int s, bool exp){
    this->name = n;
    this->salary = s;
    this->experienced = exp;
}



int main(int argc, char const *argv[]){
    
    // Constructor overloading is when you define multiple constructors of the same class but with different sets of args, for different use cases !
    // Constructor overloading also allows multiple constructors with the same number of arguments as long as the types or the order of the parameters differ. 
    // For example:
    // - One constructor can take an (int, float)
    // - Another constructor can take an (int, string)
    // The compiler differentiates the constructors based on the argument types, not the count.
    // Constructor overloading works even if the argument types are the same,
    // as long as the **order** of the parameters differs.
    // For example:
    // - One constructor can take (int, float)
    // - Another constructor can take (float, int)
    // Exactly same constructor signatures aren't allowed eg - (int,float) and (int, float) is invalid !
    
    Employee Ansh("Ansh"); // see 0 is printed because a default arg is there and it knows that Ansh is berojgar , just kidding ! Default arg sensed that the field is empty so it filled it with 0 instead of a garbage value !
    Employee Ishi("Ishi", 420420);
    Employee Atharva("Atharva", 696969, true); // instead of 'true' 1 can also be given coz 1 means true 
    
    Ansh.printData();
    Ishi.printData();
    Atharva.printData();  

    return 0;
}
