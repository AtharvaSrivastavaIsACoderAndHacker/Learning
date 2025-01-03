// Ok so this is code is copied from my earlier repos when I was learning C, I didnt want to write the same thing for the same concept twice, reused !

// ===========================================================================================================================

// Types Of Function Calls In C :-
//     * Call-By-Value
//     * Call-By-Reference

// ===========================================================================================================================


// // Call By Value -----> Values are passed to functions as arguments either directly-add(1,1) or in variable_form-add(p,q)
//                         In case of Call-By-Value, you cannot change the actual parameters of main() from add() function !
// #include<stdio.h>

// int add(int a, int b){ // int a & b are local variables of add() function also known as formal parameters, are copies of actual parameters !s
//     int sum = a + b;   // "sum" variable is a local variable which cannot be accessed outside the function body
//     return sum; // "sum" variable is a local variable and its computed (a+b) on formal parameters not the actual ones in main() !
// }

// int main(int argc, char const *argv[]){

//     int p=5,q=10;
//     printf("%d",add(p,q)); // p and q are actual parameters. Their copies are passes as arguments and they arent changed when :-
//                            // formal parameters are changed !
//     return 0;
// }


// ===========================================================================================================================


// Call By Reference -----> Variable Addresses are passed to functions as arguments, so the global variables can be derefernced and changed 
// Addresses are copied in the case of Call-By-Reference , copies of addresses are passed and are assigned to a local pointers in the function !
// #include<stdio.h>
// void increment(int* a){
//     ++*a;
// }

// int main(int argc, char const *argv[]){

//     int p=5; 
//     increment(&p);
//     printf("%d",p); // output will be 6 because increment() function incremented the value at the & of p, so it edited int p !
    
//     return 0;
// }

//                                                          -------------------------


// #include<stdio.h>
// void increment(int &a){ // another way for call by reference, more preferable coz only one '&' is to be added rather tthat putting *s !
//     ++a;
// }

// int main(int argc, char const *argv[]){

//     int p=5; 
//     increment(p);
//     printf("%d",p); // output will be 6 because increment() function incremented the value at the & of p, so it edited int p !
    
//     return 0;
// }