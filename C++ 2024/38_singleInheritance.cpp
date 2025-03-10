#include<iostream>
using namespace std;

class Employee{
    public:
        double salary;
        string name;
        Employee(string n, int s){
            this->name = n;
            this->salary = s;
        }
        void printNameAndSalary(){cout<<name<<" | "<<salary<<endl;};
};

class Programmer: public Employee{ // Single Inheritance: The derived class constructor calls the base class constructor when the Derived class is created.
    //                                If the base class has no default constructor, you must explicitly call a parameterized constructor.
    string primeLanguage; 
    public:
        Programmer(string n, double sal, string pLang):Employee(n,sal){
            primeLanguage = pLang;
        }
        void printProgrammerInfo(){cout<<name<<" | "<<salary<<" | "<<primeLanguage<<endl;};
    
};

int main(int argc, char const *argv[]){
    
    Programmer Atharva("Atharva", 1000000, "Python & C/C++");
    Atharva.printNameAndSalary();
    Atharva.printProgrammerInfo();
    
    return 0;
}