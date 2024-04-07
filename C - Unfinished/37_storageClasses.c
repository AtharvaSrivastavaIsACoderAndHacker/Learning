#include<stdio.h>

extern int hello; // --> external storage class variable !

int main(int argc, char const *argv[]){

    int a; // --> automatic storage class variable !
    static int s; // --> static storage class variable !
    register int r; // --> register storage class variable !


    // Variables defined outside any function are automatically on GLOBAL SCOPE without using the keyword "global" !
    // Global variables are initialized by default to zero if no explicit initialization is provided.

    // A storage class defines scope, defaultInitialValue and lifetime of a variable !

    // SCOPE == Where will this variable be available to access and use ? (KAHAAN UPLABDH HOGA YE VARIABLE ?)
    // DEFAULTINITIALVALUE == What will be the initial value of this variable when its decalred ?
    // LIFETIME == When will this variable perish ? (KABTAK UPLABDH HOGA YE VARIABLE ?)

    // There are 4 types of storage classes In C :-
        // * Automatic
        // * Extern
        // * Static
        // * Register



    // AUTO STORAGE CLASS (Local Variables):-
        // * Scope - Local to the function they are defined in !
        // * defaultInitialValue - Garbage Value or 0 in case of int !
        // * Lifetime - Till the end of the function they are defined in !
        // * Syntax - "int a;" IS SAME AS "auto int a;", A variable defined without any storageClass specification is an auto class variable !


    //  EXTERNAL STORAGE CLASS:-
        // These variables are declared outside any function !
        // * Scope - Global to the program they are defined in !
        // * defaultInitialValue -  Extern variables, when declared globally, are uninitialized by default !
        // * Lifetime - Throughout the lifetime of the program's runtime !
        // * Syntax - "extern int a;"
        // EXTERN VARIABLES ARE DECLARED OUTSIDE OF ANY FUNCTION !
        // GLOBAL VARIABLE'S STORAGE CLASS IS EXTERN !
        // Using extern to declare a variable won't allocate any memory because they are uninitialized until explicitly initialized !


    // STATIC STORAGE CLASS (Static Variables):-
        // * Scope - Local to the block they are defined in !
        // * defaultInitialValue - 0
        // * Lifetime - Throughout the lifetime of the program's runtime !
        // * Syntax - "static int a;"


    // REGISTER STORAGE CLASS :-
        // * Scope - Local to the function they are declared in !
        // * defaultInitialValue - Garbage Value
        // * Lifetime - Till the end of the function they are defined in !
        // * Syntax - "register int a;"
        // REGISTER VARIABLES REQUEST THE COMPILER TO STORE THE VARIABLE IN THE "CPU REGISTER" INSTEAD OF THE MEMORY FOR FASTER ACCESS !
        


    return 0;
}

