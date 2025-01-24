#include<iostream>
using namespace std;

// Function Template
template<typename x, typename y>
void printSum(x a, y b){
    x sum = a + b; // means that the sum will be in the datatype of the first arg provided !
    cout<<sum<<endl; 
}

int main(){
    
    // Function Templates vs Function Overloading
    // ----- * Use Overloading when the two functions accept various datatypes but have to do completely different things with them, eg if printSum got two matrices, it can't sum them while retaining the other basic sums like add / concat ! here you need overloading when you are doing completely different things with the various datatypes !
    // ----- * Use function templates when you know that the work to be done for various datatypes is the same and does'nt require different fuction definitions ! eg, this printSum() ! does the same eork with all datatypes, a+b !


    //ChatGPT :-
    // Function Templates vs Function Overloading:
    // * Use Overloading when different datatypes require completely different processing logic.
    //   Example: Summing two matrices vs adding integers.
    // * Use Function Templates when the operation remains the same for various datatypes.
    //   Example: Adding two numbers (as in this printSum()).
  

    printSum(2, 'a'); // sum will come in int !
    printSum('a', 2); // sum will come in char !
    printSum('A', ' ');
    printSum(23, 46);
    printSum(2.2, 3.3);
    printSum(2, 3.3); // sum will come in int !
    printSum(2.0, 3.3); // sum will come in float !

    return 0;
}
