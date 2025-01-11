#include<iostream>
using namespace std;

class Employee{
    static int count;
    public:
        Employee(){
          count++;
        }
        ~Employee(){
            cout<<"Destructor Called !"<<endl;
            count--;
        }
        static void getCount(){
            cout<<count<<endl;
        }

};
int Employee::count = 0;

int main(int argc, char const *argv[]){
    
    //  Destructors don't take or return any value !
    // A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
    // Destructor has the same name as their class name preceded by a tilde (~) symbol.
    // It is not possible to define more than one destructor.
    // The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.
    // It cannot be declared static or const.
    // Destructor neither requires any argument nor returns any value. It cannot have parameters or return a value.
    // It is AUTOMATICALLY INVOKED when an object goes out of scope. 
    // Destructor is responsible for cleaning up resources used by the object (e.g., releasing dynamically allocated memory).
    // In destructor, objects are destroyed in the reverse of an object creation.
    // The destructor is called when the object goes out of scope, typically in reverse order of construction (for automatic variables).

    Employee e1;
    Employee e2;

    Employee::getCount();

    {
        Employee ee;
        Employee::getCount();
    }
    Employee::getCount(); // when the above scope was exited, object ee got destroyed, and my destructor was called, so count is back to 2 !


    // You'll see "Destructor Called!" 2 times at the end because each object is destroyed when it goes out of scope.
    // Even if you haven't defined a destructor, the compiler generates a default one. However, when you define a destructor,
    //  the compiler calls your destructor instead of the default one.

    //  you'll see "Destructor Called !" 2 times in the end 
    // coz every object gets destroyed at the end by the compiler,
    // despite whether you have defined a destructor or not ! 
    // But if you have defined a destructor, compiler uses it instead of it's default destructor !
   
    return 0;
}