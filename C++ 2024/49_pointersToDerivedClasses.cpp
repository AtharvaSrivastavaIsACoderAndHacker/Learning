#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
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
    
   BaseClass * basePtr;

   BaseClass objBase;
   DerivedClass objDerived;

   basePtr = &objDerived; // yes, in cpp a base class ptr  can point to an object of the derived class !
   basePtr->display(); // base class's display() will be called ,  coz the ptr is of type BaseClass !, even though DerivedClass has a display(), BaseClass's display() is called !
   basePtr->var_base = 1000;
   basePtr->display(); // see this time 1000 is printed instead of a garbage value !

   // base class ptr expects the obj to have a var_base and a display(), coz it's a base class ptr!, pointing to derived class doesn't throw an error coz it has all those requirements specified earlier this line inherited from the base  class itself !
   // But the base class ptr doesn't account for some extra  members that are contained by the derived class object !
   
   

   return 0;
}
