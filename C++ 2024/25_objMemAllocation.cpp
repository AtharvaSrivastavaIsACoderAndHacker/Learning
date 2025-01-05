#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
   
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
    
    // In CPP every obj has it's own  memory and it's own copy of data but NOT functions !
    // Every obj you make from Employee class will have different data (their own iq variable) but the 3functions won't be repeated
    //      they'll be common for every object 

    Employee harry,rohan;
    
    cout<<"sizeof(Employee)-->"<<sizeof(Employee)<<endl;
    cout<<"sizeof(harry)-->"<<sizeof(harry)<<endl;//see 4 bcoz functions are'nt included, int itself is 4 bytes atleast in my architecture !
    cout<<"sizeof(rohan)-->"<<sizeof(rohan)<<endl;

    /* 
    The sizeof(Employee) reflects only the size of the data members in the class. In this case, the class Employee has a single int data 
    member (iq), which occupies 4 bytes on your system.
    Member functions of a class are not stored as part of the memory allocated to an instance of the class.
    Functions in a class are shared between all instances of the class. They exist only once in the program's memory and are accessed via 
    a mechanism akin to function pointers.
    This shared nature is why their size is not included in sizeof(Employee).

    Static Data Members:
    If the class had any static data members, they wouldn't contribute to sizeof either because static members are stored in a separate 
    location and shared across all instances.
    */

    return 0;
}