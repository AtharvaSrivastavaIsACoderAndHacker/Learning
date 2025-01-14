#include<iostream>
using namespace std;


class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        void printPersonalData(){cout<<"Personal Data : "<<name<<" | "<<age<<endl;}
};


class Employee{ 
    protected:
        int salary;
        int EmployeeID;
    public:
        Employee(int s, int eID){
            salary = s;
            EmployeeID = eID;
        }    
        void printEmployeeData(){cout<<"Employee Data : "<<salary<<" | "<<EmployeeID<<endl;}
};


class Programmer: public Person, public Employee{
    protected:
        string progLang;
    public:
        Programmer(string n, int age, int sal, int eID, string pLang):Person(n, age),Employee(sal, eID){
            progLang = pLang;
        }
        void printProgrammerData(){cout<<"Programmer Data : "<<name<<" | "<<age<<" | "<<salary<<" | "<<EmployeeID<<" | "<<progLang<<endl;}
    
};


int main(int argc, char const *argv[]){
    
    // Inheritance Path: ---------------- Person    Employee
    //                                        \      /
    //                                       Programmer

    // In multiple inheritance, 2 or even more parents can be there, not necessarily 2 !

    Programmer harry("Harry", 25, 10000, 1234, "C/C++");
    harry.printPersonalData();
    harry.printEmployeeData();
    harry.printProgrammerData();
    
    return 0;
}