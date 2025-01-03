// FUNCTION OVERLOADING

#include<iostream>

using namespace std;

int foo(int  a, int b){return  a+b;}
int foo(int  a, int b, int c){return  a+b+c;}
int foo(int  a, int b, int c, int d){return  a+b+c+d;}

int main(int argc, char const *argv[]){
    
    cout<<foo(1,2)<<endl;
    cout<<foo(1,2,3)<<endl;
    cout<<foo(1,2,3,4)<<endl;

    return 0;
}   