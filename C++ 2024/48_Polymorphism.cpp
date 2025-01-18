#include<iostream>
using namespace std;



int main(int argc, char const *argv[]){
    
  // Polymorphism is the ability of an object or a piece of code to be used in differet forms in many ways !
  // It's the ability of code to take different forms to match different use cases !
  // Types of Polymorphism:-
  //      * Compile-time Polymorphism
  //      * Runtime Polymorphism
  // https://www.geeksforgeeks.org/cpp-polymorphism/
  
  /*
      C++ Polymorphism
      ---------------------------
      Polymorphism means "many forms." It allows a single entity (function, operator, or object) 
      to behave differently in different contexts. For example, a person can act as a parent, 
      spouse, and employee in different scenarios. Polymorphism is essential in Object-Oriented 
      Programming (OOP) as it promotes flexibility and scalability.

      Types of Polymorphism in C++
      ----------------------------
      1. Compile-Time Polymorphism
        - Achieved during program compilation, also known as *early binding* or *static polymorphism*. 
        - Includes:
            - Function Overloading: Multiple functions with the same name but different parameter types 
              or counts. This enables handling various input combinations within a single function name.
            - Operator Overloading: Redefines the behavior of operators (e.g., +, -) for user-defined types. 
              Allows operators to perform custom actions, such as adding two complex numbers or concatenating strings.
        - Advantages:
            - Faster execution due to compile-time resolution.
            - Improved code readability by grouping similar operations.
        - Limitations:
            - Requires all information at compile time.
            - Cannot adapt dynamically to runtime behavior.

      2. Runtime Polymorphism
        - Achieved during program execution, also called *late binding* or *dynamic polymorphism*. 
        - Includes:
            - Function Overriding: A derived class redefines a base class function with the same signature, 
              allowing specialized behavior for objects of derived classes when accessed via base class 
              references or pointers.
            - Virtual Functions: Declared in the base class using the `virtual` keyword. They enable dynamic 
              method dispatch, ensuring the correct function is invoked for derived class objects, even when 
              accessed through a base class pointer.
        - Key Characteristics:
            - Relies on pointers or references to base class objects.
            - Enables dynamic decision-making based on the actual type of the object.
            - Supports extensibility by allowing new derived classes without altering existing code.

      Comparison: Compile-Time vs Runtime Polymorphism
      |----------------------------------------------------------------------------------------------|
      |    Aspect       | Compile-Time                   | Runtime                                   |
      |-----------------|--------------------------------|-------------------------------------------|
      |   Binding       | Early (at compile time)        | Late (at runtime)                         |
      |   Mechanism     | Function/Operator Overloading  | Function Overriding, Virtual Functions    |
      |   Flexibility   | Limited                        | High                                      |
      |   Performance   | Faster due to early binding    | Slightly slower due to runtime resolution |
      |----------------------------------------------------------------------------------------------|

      Benefits of Polymorphism in C++
      -------------------------------
      - **Code Reusability**: Similar behaviors are grouped under one name.
      - **Extensibility**: Easily add new features or behaviors without modifying existing code.
      - **Scalability**: Handles diverse scenarios dynamically at runtime.
      - **Readability and Maintainability**: Simplifies complex code structures by organizing related operations.

      Note: While polymorphism provides significant advantages, runtime polymorphism comes with a 
      slight performance cost due to dynamic resolution. It should be used judiciously when flexibility 
      and scalability are required.
  */

    
    

  return 0;
}
