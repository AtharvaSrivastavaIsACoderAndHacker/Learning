#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int a = 9696;
    int* samplePtr = &a;

    // NULL Pointer does not point to any valid object !
    // NULL POINTER GALTI SE BHI KAHIN POINT NAHI KAREGA !
    // Null pointer has a defined value, decided by the environment to not be a valid memory address !
    // Null pointer has a value reserved to indicate that it does not point to a valid object !
    // Whenever NULL Pointer WILL be compared to any normal pointer, it will always result unequal !
    int* ptr = NULL;
    // printf("%d\n",*ptr); // derefrencing a NULL pointer is undefined behaviour in C Language !
    // printf("%d\n",*ptr); // if i dereference it right now, program will display nothing after this line and stop !


    // Null pointer gives programmer the functionality to check whether a pointer is legit or not (Like in malloc(), if memory isnt allocated) !
    if (ptr == samplePtr){
        printf("Byeeeeeeeee!!!!!!!!!!!!!!!!\n"); // wont print,coz one is NullPtr and other one is a normalPtr, result will be false !
        return 0;
    }


    ptr = &a; // now, ptr is no more a NULL pointer, now it points to int a !
    printf("int a is %d\n",*ptr);
    printf("address of int a is %d\n",ptr);
    printf("address of int a is %d\n",&a);

    
    if (ptr == samplePtr){
        printf("Byeeeeeeeee!!!!!!!!!!!!!!!!, Both are the same !\n"); // will print, coz we changed ptr to be &a, which is same as samplePtr !
        return 0;
    }

    // A Good C programmer should run a check before dereferencing any pointer, to make sure its not a NullPointer !

    /* 
    USES :-
        * Error Handling (dereference the pointer only if its not a NullPtr)
        * To initialize a ptr prior to assigning a valid address !
        * To pass a NullPointer in a function argument when we dont want to pass any valid memory address (To Skip) !
    */


    int* uni; // its an uninitialized pointer, which has a random memory location !
    
    // NULL is a macro defined as ((void *)0) in the header files of most of the C Compiler implementations !
    int* ptrr = ((void *)0); // this is a valid way of creating NULL pointer but not recommended to use it this way, Use NULL keyword only !


    return 0;
}