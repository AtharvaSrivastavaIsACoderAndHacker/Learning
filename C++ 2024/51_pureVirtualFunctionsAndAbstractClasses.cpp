#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        virtual void display()=0; // =0 made it a PURE virtual function ! do-nothing function !
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(int argc, char const *argv[]){
   
  // in virtual functions, it's optional to redifine the functions in the derived class, it works even if you don't override the function in the derived class ! if not redifined, original virtual function of the base class will be called !
  // Pure virtual functions however need to be redefined, and it's not optional !
  // an abstract class is one which at least has one pure virtual function ! Abstract classes can be used like Interfaces in Java !
  // BaseClass is an example of an abstract class in this program !
  

  // A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration.
  // A class is abstract if it has at least one pure virtual function.

  return 0; 
}
