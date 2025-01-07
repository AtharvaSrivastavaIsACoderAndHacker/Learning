#include<iostream>
using namespace std;

class Employee{
    public:
        int iq;
        void getIQ(){
            cin>>iq;
        }
        void increaseIQ(){
            ++iq;
        }
        void decreaseIQ(){
            --iq;
        }
};

int main(int argc, char const *argv[]){
    

    // Array of objects
    Employee employees[4];
    for (int i = 0; i < sizeof(employees)/sizeof(employees[0]); i++){
        employees[i].getIQ();
    }
    for (int i = 0; i < sizeof(employees)/sizeof(employees[0]); i++){
        cout<<employees[i].iq<<endl;
    }


    //====================================================================================================================================


    // Array of objects is just like a regular one, you can store and retrieve ! You can also use pointers with an arrayOfObjects !
    Employee students[2];
    // Employee Ishi, Atharva;
    // students[0] = Ishi;          // this wasn't needed coz obj array already has objs in it, but it's just to demonstrate !
    // students[1] = Atharva;

    students[0].getIQ();
    students[1].getIQ();

    cout<<students[0].iq<<endl;
    cout<<students[1].iq<<endl;

    Employee* ptr = students;
    ptr++;
    cout<<"This pointer points to obj with iq -> "<<(*ptr).iq<<endl;
    ptr--;
    cout<<"This pointer points to obj with iq -> "<<(*ptr).iq<<endl;
    

    return 0;
    }