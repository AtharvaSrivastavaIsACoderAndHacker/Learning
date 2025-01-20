#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        virtual void display(){
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
   
   // Virtual keyword infront of a function indicates that the function is gonna be overwritten in it's defived class(es) !
   /*
    Virtual Functions in C++:
    - A member function in a base class, declared with the `virtual` keyword, can be overridden in a derived class.
    - Enables runtime polymorphism: The correct function is called based on the object type, even if accessed via a base class pointer/reference.
    - Resolves function calls at runtime.

    Key Rules:
    1. Cannot be static.
    2. Can be a friend function of another class.
    3. Should be accessed via a base class pointer/reference for polymorphism.
    4. Must have the same prototype in the base and derived class.
    5. Defined in the base class; overriding in derived class is optional. If not overridden, the base class version is used.
    6. A class can have a virtual destructor but not a virtual constructor.
   */


   BaseClass * basePtr;

   BaseClass objBase;
   DerivedClass objDerived;

   basePtr = &objDerived; // this ptr cannot access display() of derived class, but if we tell that display() is gonna be overwritten in the derived class, then DerivedClass::display() can be invoked through basePtr !
   
   basePtr->display(); // DerivedClass::display() is invoked !
   basePtr->var_base = 10;
   // basePtr->var_derived = 20; // even though it can now access DerivedClass's display() but it still can't access other members of the derived class ! See, the  DerivedClass::display() access was there coz of it being a virtual function ! 
   basePtr->display();


   // a real life example of the practical usage of virtual functions !
        //    class PaymentProcessor {
        //     public:
        //         virtual void processPayment(double amount) = 0; // Pure virtual function
        //     };

        //     class CreditCardProcessor : public PaymentProcessor {
        //     public:
        //         void processPayment(double amount) override {
        //             cout << "Processing credit card payment of $" << amount << endl;
        //         }
        //     };

        //     class PayPalProcessor : public PaymentProcessor {
        //     public:
        //         void processPayment(double amount) override {
        //             cout << "Processing PayPal payment of $" << amount << endl;
        //         }
        //     };

        //     void handlePayment(PaymentProcessor* processor, double amount) {
        //         processor->processPayment(amount); // Calls appropriate implementation at runtime
        //     }

        //     int main() {
        //         CreditCardProcessor cc;
        //         PayPalProcessor pp;

        //         handlePayment(&cc, 100.50);
        //         handlePayment(&pp, 200.75);
        //     }

   

   return 0;
}
