#include<iostream>
using namespace std;

class Base {
  protected:
    int number;
    Base(int x){
      number = x;
    }
    int returnNumber(){
      return number;
    }
};


class Derived : protected Base{
  protected:
  int numberD;
  public:
    Derived(int a, int b) : Base(a){ // base constructor is called with int a as an argument over here !
      numberD = b;
    }
  void showNumbers(){
    cout<<returnNumber()<<" | "<<numberD<<endl;
  }
};


int main(int argc, char const *argv[]){
    


  // in multiple inheritance, base classes' constructors are called in the order they are specified in the derived class's declaration : EG ---- class Derived : public Base1, public Base2{}; --> base1's constructor would be executed 1st, them Base2's !
  // In multilevel inheritance, the constructors are called in the order of the inheritance path !
  // The constructors for virtual base classes are invoked before a non-virtual base class !
  // If there are multiple virtual base classes, they are invoked in the order they are declared in !
  







  // INITIALIZER LISTS
  /*
  1. Order of Construction
  When an object of a derived class is created, the base class's constructor is always invoked first, before the derived class's constructor.
  This is because the derived class depends on the base class being properly initialized to function correctly. The derived class "builds upon" the base class.

  2. How the Base Class Constructor Gets Values
  The base class constructor gets its values from the member initializer list of the derived class's constructor.
  When the derived class's constructor is called, it first evaluates its member initializer list. If the derived class specifies a call to the base class constructor in this list, those values are passed to the base class constructor before the derived constructor's body is executed.

  4. Why Base Constructors Are Called First
  Base class constructors are responsible for initializing the base class part of the derived object.
  If the derived class's constructor executed first, it would be attempting to use uninitialized data from the base class, which could lead to undefined behavior.
  To prevent this, C++ enforces that base class constructors are always called first during the construction process.

  Summary
  The base class constructor is called first because it initializes the base part of the object. The derived class constructor provides the arguments for the base class constructor using the member initializer list. This ensures that the object is constructed in a logical and predictable order, avoiding the use of uninitialized members.
  */
  
  
  // Initializer list is evaluated as soon as the Derived constructor is called, then it invokes Base constructor/s, after it has given the values to the base constructors and invoked them, after that it can move and execute it's own code body, and complete it's execution !
  // Der(int a, int b): Bas(a){ // in this, when Der() is called, it evaluates the initialization list and passes int a to Bas() constructor and invokes it first !
  // DerB = b; // then at last, the instructions of the Der() constructor are executed and Der() constructor also finishes it's execution following Bas() !
  // }
  

  // int x, y; // btw, here variable x is declared first and y afterwards !
  // Point(int i, int j) {
  //          x = i;
  //          y = j;
  //     }
  // Another way to write ---- Point(int i, int j): x(i), y(j) {} // x will be assigned i, first beause int x was declared first ! then j will be asigned to y !



  // Derived(int a, int b) : <initialization sector>


  Derived d(10, 20);
  d.showNumbers();

    
  return 0;
}
