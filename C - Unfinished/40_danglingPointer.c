#include<stdio.h>
#include<stdlib.h>

int uselessFunction(){
    int a = 15;
    return (int)&a;
}

int main(int argc, char const *argv[]){
    
    // DANGLING POINTER POINTS TO A FREED MEMORY LOCATION / DEALLOCATED MEMORY LOCATION !
    // Dangling means hanging ! Latka hua !
    // Dangling Pointer is a pointer pointing to a freed memory location whose content has been deleted !
    // Dangling pointers arise when you deallocate a memory location or destroy an object, but the pointer assigned during usage still
    //              points to that freed up memory location !

    /*
    CAUSES OF DANGLING POINTER :-
        * Deallocation of memory !
        * Returning &of(local variables) in a function !
        * Variable going out of scope ! 
    */

   /*
   ARE DANGLING POINTERs GOOD TO HAVE ?, NO ! :-
        * can introduce nasty bugs in our C program !
        * these bugs due to dangling pointers sometimes become a security vulnerability loopHole !
        * we can avoid these issues by setting suspected dangling pointers to NULL coz doing so makes it from a DANGLING to a NULL pointer !
   */
    





   /*
   // DEALLOCATION OF MEMORY

    int* ptr = (int *) malloc(10*sizeof(int));

    for (int i = 0; i < 10; i++){
        *(ptr+i) = i;
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n",*(ptr+i));
    }

    free(ptr);
    // DANGLING POINTER ARISES !
    printf("Freed\n");

    // ptr is now a dangling pointer !

    for (int i = 0; i < 10; i++){
        printf("%d\n",*(ptr+i));
    }
   */







    /*
    // RETURNING &of(LOCAL VARIABLES) IN FUNCTION CALLS

    int* ptrr = uselessFunction();
    // DANGLING POINTER ARISES !

    printf("%d\n",*ptrr); 

    // doesnt print 15, coz its a dangling pointer and its content is deleted bcoz stackFrame of uselessFUnction cleared when 
    // it returned a value, so int a was deleted but this lonely ptrr is sadly still pointing to his/her dead partner ! RIPPPP :(
    */







   /*
   // VARIABLE GOING OUT OF SCOPE

    int* ptrrr = NULL;

   { // --> scope starts

    int i = 10099;
    ptrrr = &i;

   } // --> scope ends
   // DANGLING POINTER ARISES !

   printf("%d\n",*ptrrr); 
   // value of i shouldnt be printed here, but if it gets printed correctly (thats whats happening with me !), its an UndefinedBehaviour 
   // by the C compiler ! The memory is deallocated and is invalid / freed now but, the contents at that memory block arent overwritten yet !
   */





    return 0;
}