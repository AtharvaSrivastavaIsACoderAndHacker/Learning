#include<stdio.h>

int main(int argc, char const *argv[]){

    // WildPointers arent a good thing to have !
    // Uniinitialized pointers are known as Wild Pointers ! 
    // These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly !
    // Dereferencing wild pointers can cause nasty bugs !
    // Its always suggested to initialize unused pointers to NULL !

    int a;
    int* ptr; // its a wild pointer 

    // printf("%d\n",*ptr); // galat kaam kar rrha hai
    // *ptr = 10; // galat kaam kar rrha hai --> editing the value at this arbitrary address ! --> DONT LET THIS LINE RUN !!!!!

    ptr = &a; // ptr is no longer a wildPointer !
    
    return 0;
}