#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    // Pointers store addresses of other variables !
    // '& or address of' operator gives address of the variable the follows it !
    // '* is the derefrence operator', it gives the value at the address followed by it !

    int a = 69;
    int* ptr = &a;
    cout<<*ptr<<endl; // *ptr == *&a == a !
    
    int** ptrtoPTR = &ptr; // pointer to another pointer to a variable
    cout<<*ptrtoPTR<<" -- address of a"<<endl;
    cout<<*(*ptrtoPTR)<<" -- a"<<endl; // *(*ptrtoPTR) == *(ptr) == a !

    return 0;
}

https://www.geeksforgeeks.org/pointers-vs-references-cpp/
