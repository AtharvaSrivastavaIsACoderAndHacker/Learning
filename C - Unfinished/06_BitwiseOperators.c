#include<stdio.h>

int main(int argc, char const *argv[]){
    
    /*
    In computer programming, a bitwise operation operates on a bit string,
    a bit array or a binary numeral at the level of its individual bits. 
    It is a fast and simple action, basic to the higher-level arithmetic 
    operations and directly supported by the processor.
    */
    


    // Types of Bitwise Operators :-
    /*


        1. Bitwise AND - is just like normal && operator except that it works on individual bits of a datatype. 
            2&3 = 2
            It's because these numbers in binary are 10 and 11 so ,      10
                                                                       & 11
                                                                      -------
                                                                         10
                                                                      -------


        2. Bitwise OR - is just like normal || operator except that it works on individual bits of a datatype. 
                    2|3 = 3
                    It's because these numbers in binary are 10 and 11 so ,      10
                                                                               | 11
                                                                              -------
                                                                                 11
                                                                              -------



        3. Bitwise XOR - it returns true only when 1 bit is 1 and another is 0 and it works on individual bits of a datatype. 
                    2^3 = 1       -----------> Note - C doesn't have exponentiatiation operator, it can be used through Math.h , pow()
                    
                    It's because these numbers in binary are 10 and 11 so ,      10
                                                                               ^ 11
                                                                              -------
                                                                                 01
                                                                              -------

        4. Left shift - << 
                    2<<2 = 8
                    It's because these numbers in binary are 10 and 11 so ,      00000010
                                                                              <<        2
                                                                              -------------
                                                                                 00001000
                                                                              -------------
                    

        5. Right shift - >> 
                    6>>1 = 3
                    It's because these numbers in binary are 10 and 11 so ,      00000110
                                                                              >>        1
                                                                              -------------
                                                                                 00000011
                                                                              -------------
                    
        6. One's complement / Bitwise NOT - ~       --------------------------> Unary operator
                    Inverts the bits bitwise.
                   

    */


    return 0;
}