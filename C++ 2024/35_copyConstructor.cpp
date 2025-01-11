#include<iostream>
using namespace std;

class Employee{
    double salary;
    string name;
    public:
        Employee(){} // default constructor
        Employee(string n, double s){
          name = n;
          salary = s;
        }
        Employee(Employee &a){ // copy constructor
          name = a.name;
          salary = a.salary;
          cout<<"Copy constructor called !"<<endl;
        }
        void getData(){cout<<name<<" | "<<salary<<endl;};

};




class Student{
    string name;
    public:
        Student(string n){
          name = n;
        }
        void getData(){cout<<name<<endl;};
};




int main(int argc, char const *argv[]){
    
    // The compiler has an inbuilt copy constructor for every class ! When no copy constructor is defined, the compiler supplies it's own built  in  copy constructor ! bolo compiler baba ki jaiii !

    Employee Adhyan("Historian",  10); 
    Employee AdhyanAltAccount(Adhyan);
    
    Adhyan.getData();
    AdhyanAltAccount.getData(); // see all the data of Adhyan got copied to his alt AdhyanAltAccount



    Student Ansh("Ansh");// yes, bichara ansh abhi tak berojgar hai ! koi hamare aspiring gyne&^*%&^% *cough* doctor ko accept hi nhi krta !
    Student AnshAltAccount(Ansh); 
    Student AnshSchoolAccount = Ansh; // compiler's copy constructor invoked // = method also works !
    Ansh.getData();
    AnshAltAccount.getData(); // see even though the class had no copy constructor, the obj got copied !
    AnshSchoolAccount.getData();
    
   return 0;
}
