#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // C Preprocessing is done before compilation !
    // C Preprocessor is not a part of the C Compiler !
    // It's a text substitution tool !
    // All Preprocessor commands begin with a HASH SYMBOL --> #
    // MACROS are shortforms for some code, wherever they are used, they are substituted with the value they are assigned to !

    /*
    Commands :-
        * #define --> Defines a MACRO !
        * #include --> Includes a header file !
        * #undef --> Undefines a Defined MACRO !
        * #ifdef --> Checks whether a MACRO exists or not and returns TRUE when it is found existing ! 
        * #ifndef --> Checks whether a MACRO exists or not and returns TRUE when it is not found existing ! 
        * #if --> Checks a condition and runs some lines when the condition is TRUE !
        * #elif --> Checks a condition in continuation to a #if and runs some lines when the condition is TRUE !
        * #else --> When all conditions fail, else block is executed !
        * #endif --> Ends the control block #if !
    */




   // #define
   // #define HELLO 25
   // #define ADD(a,b) a+b --> can be used like a function now FOR HIGH USAGE, ITS BETTER TO MAKE NORMAL FUNCTIONS !

   // #include
   // #include"stdio.h" --> searches for this file in the pwd as well as in the cStandardLibrarySection !
   // #include<stdio.h> --> searches for this file only in the cStandardLibrarySection

   // #undef
   // #undef HELLO --> HELLO should be defined somewhere at the first place to undo its creation !

   // #ifdef
   // #ifdef HELLO --> returns TRUE

   // #ifndef
   // #ifndef HALO --> returns TRUE

   // #if
   // #if (condition)       lines that have to be under this if block from the next line !

   // #elif
   // #elif (condition)       lines that have to be under this if block from the next line !

   // #else
   // #else

   // #endif
   // #endif


    return 0;
}