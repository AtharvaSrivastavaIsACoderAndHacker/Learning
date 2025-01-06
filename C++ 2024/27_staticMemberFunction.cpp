#include<iostream>
using namespace std;

class Employee{
    int salaryHikePercentage = 8;
    static int count;
    public:
        static void getCount(){cout<<count<<endl;} // this static function can only access static data members of this class !
        double salary;
        string name;
        void setData(string name, int salary){this->name = name;this->salary = salary;count++;} 
        void getData(){cout<<count<<" "<<name<<" | "<<salary<<endl;};
        void pagarBadhao(){salary *= (100+salaryHikePercentage)/100.0;}
};
int Employee:: count;


int main(int argc, char const *argv[]){
    
    // Static Member Function in C++
    //     A static member function is independent of any object of the class. 
    //     A static member function can be called even if no objects of the class exist.
    //     A static member function can also be accessed using the class name through the scope resolution operator.
    //     A static member function can access static data members and static member functions inside or outside of the class.
    //     Static member functions have a scope inside the class and cannot access the current object pointer.
    //     You can also use a static member function to determine how many objects of the class have been created.
    //     It's somewhat like class methods in python !
    //     These static functions can be use to make utility functions that are directly associated with the class ! Eg cmath class
   
    Employee Ishi, ansh;
    Ishi.setData("Ishi", 10000);
    Ishi.getData();
    Ishi.pagarBadhao();
    Ishi.getData();

    ansh.setData("Ansh", 10);
    ansh.getData();
    ansh.pagarBadhao();
    ansh.getData();

    Employee::getCount();
  
    return 0;
}