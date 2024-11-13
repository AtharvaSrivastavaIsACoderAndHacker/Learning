#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    // Typecasting means converting one datatype to another either implicitly(automatically) or explicitly !
    https://media.geeksforgeeks.org/wp-content/uploads/20220920140427/hierarchyofarithmeticconversion.png --> implicit typecasting chart !

    // Implicit Typecast --> automatic by the compiler
            int x = 9; // integer x
            char y = 'a'; // character y
            // y implicitly converted to int. ASCII value of 'a' is 97
            cout<<x+y<<endl; // --> 106 hehe !
    
    
    // Explicit Typecast
            double z = 10.99;
            cout<<(int)z<<endl; // no rounding, decimals are remover, only whole integeral values are considered !
        
    return 0;
}