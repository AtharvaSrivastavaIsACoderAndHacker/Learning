#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){
  
    // Inheritance is a mechanism of reusing a class's code in it's child classes. It allows a class to inherit the data and methods of another class !
    // With inheritance, we can reuse a code in it's child class while adding more detail specific functionality !
    // It is one of the four concepts of OOPs !
    // Reusing already tested and debugged code can save a lot of time, money and effort ! (It can save lives too, those of some rage-tortured keyboards)

    // Parent class is called BASE CLASS 
    // Child class in called DERIVED CLASS

    // Types of Inheritance:
    //    * Single Inheritance -- A --> B
    //    * Multiple Inheritance -- It is when a Derived class has multiple Base/ Parent classes! -- A     B
    //                                                                                                \   /
    //                                                                                                  C
    //    * Multilevel Inheritance -- It is when there are multipe generations. repeating single inheritances ! -- A
    //                                                                                                             |
    //                                                                                                             B
    //                                                                                                             | 
    //                                                                                                             C 
    //    * Hybrid Inheritance -- It is when you combine multiple types of inheritance into one single type -- Eg - A   B
    //                                                                                                               \ /
    //                                                                                                                C
    //                                                                                                                |
    //                                                                                                                D
    //    * Hierarchical Inheritance -- Several Derived, from one base class -- A
    //                                                                         / \
    //                                                                        B   C
    //                                                                       /\   /\
    //                                                                     B1 B2 C1 C2 
    
    // Access Control Syntax:
    // class Derived : <access-specifier> Base { ... };

    // Summary Table: Access Control in Derivation --> each specifier says either you'll have equal access or less access than me ! EG- in protected, no one is above prot, no one is public !
    // ||| Base Class Member  ||| Public Derivation | Protected Derivation  | Private Derivation  |||                               Eg - in private, no one is more than private !
    // |||--------------------|||-------------------|-----------------------|---------------------|||
    // ||| PUBLIC             ||| Public            | Protected             | Private             |||
    // ||| PROTECTED          ||| Protected         | Protected             | Private             |||
    // ||| PRIVATE            ||| Not Accessible    | Not Accessible        | Not Accessible      |||

    // Key Notes:
    // - Public Derivation: Public and protected members of the base class retain their access levels in the derived class.
    // - Protected Derivation: Public members of the base class become protected in the derived class.
    // - Private Derivation: Public and protected members of the base class become private in the derived class.
    // - Private members of the base class are never accessible in the derived class, regardless of the derivation type.
 

  return 0;

}
