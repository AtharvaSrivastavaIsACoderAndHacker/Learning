#include<iostream>
using namespace std;

class Base{
    protected: // means it's private from the outside world but only the class itself and the Children classes can access this data !
    int data1 = 10, data2 = 20; 
};

class Derived: protected Base{
    int data3;
    public:
        void process(){data3 = data1 * data2;}
        void display(){cout<<"| "<<data1<<" | "<<data2<<" | "<<data3<<" |"<<endl;}
};



int main(int argc, char const *argv[]){
    
    // Protected means it's mostly like private but public to the children classes !
    // In protected access modifier, the data cannot be access by anyone outside the class or the class' bloodline !
    // No outsider can access, but the children classes can access this protected data !

    Derived d;
    d.process();
    d.display();

    // cout<<d.data1;  // invalid coz data1 is inherited as protected in Derived, so outsiders can't access it ! only the children classes can access protected data !
    // cout<<d.data3;  // invalid coz data3 is private of the Derived class, thus can't be accessed form outside !
    
    return 0;
}