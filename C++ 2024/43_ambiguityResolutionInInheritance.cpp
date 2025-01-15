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
        void printData(){cout<<"Personal Data : "<<name<<" | "<<age<<endl;} // ambiguity
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
        void printData(){cout<<"Employee Data : "<<salary<<" | "<<EmployeeID<<endl;} // ambiguity
};


class Programmer: public Person, public Employee{
    protected:
        string progLang;
    public:
        Programmer(string n, int age, int sal, int eID, string pLang):Person(n, age),Employee(sal, eID){
            progLang = pLang;
        }
        void printProgrammerData(){
           // printData(); // ambiguity
           // printData(); // error is thrown on these 2 lines -- 43_ambiguityResolutionINInheritance.cpp:38:12: error: reference to 'printData' is ambiguous
          Person::printData(); // ambiguity resolution
          Employee::printData();
          cout<<"Programming Language : "<<progLang<<endl;
        }
};

int main(int argc, char const *argv[]){
   
    // If base class has a function x() and derived class also has a function definition with the same name x(), the derived class / child class overwrites the function of the parent class ! -- Automatic ambiguity resolution 
    // Sometimes an ambiguity in inheritance doesn't even cause a runtine error by the compiler, it causes a logical error ! In those cases, it's very troublesome to debug  if your code is not throwing an error but is behaving in a unexpected manner !  Beware of these mistakes ! 

   Programmer harry("Harry", 25, 10000, 1234, "C/C++");
   harry.printProgrammerData();

   return 0;
}
