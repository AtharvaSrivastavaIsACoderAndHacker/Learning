#include<iostream>
using namespace std;

class Employee{
  public:
        double salary;
        string name;

        void setNameAndSalary(string name, int salary){
            // name = name; // logical error, garbage value will be assigned again to these variables !
            // salary = salary;
            this->name = name; // this refers to the object through which this function is called through !
            (*this).salary = salary; // this method is the same as above one, just chose pointer dereferencing over -> operator !
        }
        void printNameAndSalary(){cout<<name<<" | "<<salary<<endl;}

        Employee returnObject(){ // this isnt a constructor, this is a function that returns an object !
          return *this;
        }
};

int main(int argc, char const *argv[]){

  // In Cpp, a local variable is given more precedence than a class varibale !
  // this-><variable> refers to the local variable of that object !
  // 'this' is a pointer pointing to the object the function is invoked through !
  // It can be used to return the object which called the function !

  Employee Ishi;
  Ishi.setNameAndSalary("Ishi",100);
  Ishi.printNameAndSalary();
  (Ishi.returnObject()).printNameAndSalary(); // returnObject returns the obj, so we can use it's functions too ! this line prints Ishi's name and salary again coz Ishi object got returned and it's print functions got invoked !

  return 0;
}
