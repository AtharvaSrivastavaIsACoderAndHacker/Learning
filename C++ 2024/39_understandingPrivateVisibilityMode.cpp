#include<iostream>
using namespace std;

class Base{
    int data1 = 10, data2 = 20;
    public:
        int getData1(){return data1;}   
        int getData2(){return data2;}   
};

class Derived: private Base{
    int data3;
    public:
        void process(){data3 = getData1() * getData2();} //  you can't  ever inherit private members but you can access them ONLY if the parent class provides you a public function to do so !
        void display(){cout<<"| "<<getData1()<<" | "<<getData2()<<" | "<<data3<<" |"<<endl;}
};



int main(int argc, char const *argv[]){
    
    Derived d;
    d.process();
    d.display();

    // cout<<d.data1;  // invalid coz data1 was never inherited as it was private ! even if it was public, when inherited, it became private of Derived class, so neither of the ways will work !
    // cout<<d.data3;  // invalid coz data3 is private of the Derived class, thus can't be accessed form outside !
    
    return 0;
}