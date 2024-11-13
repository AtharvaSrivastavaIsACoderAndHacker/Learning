#include<iostream>

using namespace std;

int x = 69;

int main(int argc, char const *argv[]){
    
    // int x = 10;

    // cout<<"Value of local x = "<<x<<endl;
    // cout<<"Value of global x = "<<::x<<endl; // :: == scope resolution operator ! --> will now print global x
    




    // // A decimal literal in C++ is a double type by default !
    // float a = 69.69f; // an 'f' or 'F' is needed to specify that the value is a float otherwise the float type will carry a 
    //                      double literal !
    // if 69.69 is passed as an arg, it'll be considered a double literal despite it beig stored in float, if it doesn't
    // have an 'f', it's a double !
    // 69.69 --> double
    // 69.69f --> float
    // 'l' or 'L' for long double !
    // double aa = 69.69;
    // cout<<"sizeof 1.1f = "<<sizeof(1.1f)<<endl; // --> float
    // cout<<"sizeof 1.1 = "<<sizeof(1.1)<<endl; // --> double
    // cout<<"sizeof 1.1l = "<<sizeof(1.1l)<<endl; // --> long double
    

    // Reference Variables 
    // int x = 100;
    // int &y = x; // y is a reference variable to x !, x ki copy nahi bani hai, y variable x ko refer karta hai !
    // cout<<x<<endl;
    // cout<<y<<endl;
    // x++;
    // cout<<x<<endl;
    // cout<<y<<endl; // y isn't a copy, but is a live reference to x, y bhai call forwarding hai C++ ka !, so this will also print 101


    return 0;
}