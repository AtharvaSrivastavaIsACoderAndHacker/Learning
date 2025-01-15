#include<iostream>
using namespace std;

class A { 
public: 
    void show(){ 
        cout << "Hello from A \n"; 
    } 
}; 

class B : virtual public A { 
}; 

class C : public virtual A { // virtual public and public virtual, both are correct !
}; 

class D : public B, public C { // if A is not declared as virtual base class (error aayega), B and C would get copies of show() and then D would get ttwo copies of the same function causing an ambiguity !
                               // A is a virtual base class meaning B and C would not inherit a COPY of show() but they would inherit the function virtually ! Resulting in passing only one function to D which is indirectly from A, solving any ambiguity !
                               // only one instance of show() should be there, two would cause problems !
};                              

// Inheritance Path : https://media.geeksforgeeks.org/wp-content/uploads/20190312133527/Need-of-Containership-in-C.jpg

int main(int argc, char const *argv[]){
    
    // Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an 
    // inheritance hierarchy when using multiple inheritances. 
    // Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is the base of two other classes B and C.
    // Both these class are inherited into another in a new class D as shown in figure below. 
    
    D obj;
    obj.show(); // Calls A::show() without ambiguity because A is a virtual base class and show() isn't copied, it's inherited virtually !
    
    return 0;
}