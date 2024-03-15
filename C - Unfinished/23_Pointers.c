#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // pointers are of 4 bytes in 64 bit architecture
    // & is the "address of" operator ----> &varr is the address of variable varr
    // * is dereference operator or the indirection operator which returns value of the address its continued with eg -> *&a returns value of a

    int a = 23;
    int* p = &a;

    printf("Value Of a (*&a) %d\n", *&a); // ------> pointer stores & of the variable and * returns value of the address its continued with !

    printf("Value Of a (*p) %d\n", *p); // ------> p has the adderess of a, so *p prints value of a

    printf("Address of a in Hexadecimal form %x\n", p); // ------> p has the address of a, so p prints address of a in hexadecimal form

    printf("Address of a in pointer form %p\n", p); // ------> p has the adderess of a, so p prints address of a in pointer form 

    printf("Address of a in integer form %d\n", p); // ------> p has the adderess of a, so p prints address of a in pointer form

    printf("Sizeof(&a) %d\n", sizeof(&a)); // ------> 4 bytes in my 64bit architecture

    printf("Sizeof(p) %d\n", sizeof(p)); // ------> 4 bytes in my 64bit architecture
    
    printf("*(*&p) %d\n", *(*&p)); // ------> *(&p) will return value of p. value of p is &a, so *(*&p) == *&a and *&a == 23



    // --------------------------------------------------------------------------------------------------------------------------


    // Null pointer is like an int variable without any value ed ----> int a;
    int* pp = NULL; // Null pointer is a pointer that is initialized without pointing to any address like ---> int a; 
    printf("%d\n", *pp);
    // ^^^^ nothing will be printed because ptrNull stores no address and * doesnt get any address to show the value of 
   
    return 0;
}