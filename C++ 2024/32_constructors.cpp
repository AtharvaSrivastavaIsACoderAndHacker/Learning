#include<iostream>
using namespace std;



class Employee{
    double salary;
    public:
        Employee (string , int ); // declaration only ! No return type is needed, only the classname declares a constructor !
           
        // Employee (string n, int s){ // both declare and define it over here itself !
        //     this->name = n;
        //     this->salary = s;
        // }
        string name;
        void printData(){cout<<name<<" | "<<salary<<endl;};
};

Employee:: Employee(string n, int s){ // syntax is a bit different from the way we define functions separately !
    this->name = n;
    this->salary = s;
}

// Parameterized constructor definition with an initializer list
// Employee::Employee(string n, int s) : name(n), salary(s) {} // this is also a way to define a constructor using an initializer list !







// this Student class is made to demonstrate Default constructors
class Student{
    string school;
    public:
        Student ();
        void printSchool(){cout<<school<<endl;};
};

Student::Student(){
    school = "Cms";
}
// Default constructor definition
// Student::Student() : school("CMS") {} // this is also a way to define  a constructor





int main(int argc, char const *argv[]){

    //  Constructors are functions that are invoked automatically along with the function declaration, they take args initialize
    //          corresponding objects and set their data !
    // A default constructor is a constructor which take no parameters / args !
    // A parameterized constructor takes args and sets values of the object just following the object's initialization !
    // A constructor should be declared in the public section of the class, private or protected constructors can be made but then we wont be able to create objects coz then we'd be invoking the class's private constructor, which would throw an error !
    // A private constructor can be called through a friend class, so this, deliverately, can add a layer of security to the first class !
    // Do not have return types !
    // We cannot refer to the address of a constructor !
    // Constructors, like normal functions, can have default arguments at their declaration point inside the class !
    

    // ========================================================


    // We are self-employed; Ishi is the CM of Kachra Pradesh and I am the CEO of khasiZukaam Pvt Ltd.
    Employee Ishi("Ishi", 420420);  // this is the invokation  of a parameterized constructor  !
    Employee Atharva("Atharva", 696969); // this is the format of IMPLICIT CALL for constructors !
    // Employee Ishi = Employee("Ishi", 420420);  // this is the format of EXPLICIT CALL for constructors !
    // Employee Atharva = Employee("Atharva", 696969);


    // Both Implicit and Explicit calls work the same only the format is different !


    // Display Employee details
    Ishi.printData();
    Atharva.printData();

    // ============================================================

    Student Ansh; // berojgaar Ansh, 8th fail h bichara, 11th time 8th ka final exam dega ye ! koi nahi chidhayega mere berojgar, aspiring gynec&^%^^ dost ko (EXCEPT ME heheheheheh 'trollfaceEmoji') !
    Ansh.printSchool(); // see Cms will be even if i didn't directly set the value, coz the default constructor hardcodes the value in the start !

    return 0;
}