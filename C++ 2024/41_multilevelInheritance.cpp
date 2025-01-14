#include<iostream>
using namespace std;

class Employee{
    protected:
        double salary;
        string name;
        Employee(string n, int s){
            this->name = n;
            this->salary = s;
        }
        void printNameAndSalary(){cout<<name<<" | "<<salary<<endl;};
};

class Programmer: protected Employee{ 
    protected:
        string primeLanguage; 
        Programmer(string n, double sal, string pLang):Employee(n,sal){
            this->primeLanguage = pLang;
        }    
};

class WebDev: protected Programmer{ 
    public:
        string techStack; 
        WebDev(string n, double sal, string pLang, string tStack):Programmer(n, sal, pLang){
            this->techStack = tStack;
        }
        void printWebDevInfo(){cout<<name<<" | "<<salary<<" | "<<primeLanguage<<" | "<<techStack<<endl;};
    
};



int main(int argc, char const *argv[]){
    
    // Employee is the Base class of Programmer !
    // Programmer is the Base class of WebDev !

    // Inheritance Path: -------------- Employee --> Programmer --> WebDev

    WebDev Ishi("Ishi", 1000, "JS", "MERN Stack : Next.js");
    Ishi.printWebDevInfo(); // see name and salary are also printed, multilevel inheritance !

    // Ishi.printProgrammerInfo(); // invalid coz WebDev inherits all parent data and methods as protected so you can't access 
    //                                them through WebDev -- All are protected, so you can't access it with Programmer or even Employee !
    
    return 0;
}