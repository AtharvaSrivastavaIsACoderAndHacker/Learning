#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    // A constant is similar to a variable but it cannot be changed once initialized !
    const float pi = 3.14159265358;

    // Tryna change a const, marlo pathar par sar kuch ni hora koshis krke !
    // pi = 69;
    // Error --> 09_constants.cpp:9:10: error: assignment of read-only variable 'pi'
    //             pi = 69;
    //                 ^~
    
    return 0;
}