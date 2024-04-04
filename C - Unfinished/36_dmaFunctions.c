#include<stdio.h>
#include<stdlib.h> // Used to import dMA functions !

int main(int argc, char const *argv[]){
    

    // ---------------------------------------------------------------------------------------------------------------------------

    /* 
    In dMA, memory is allocated at runtime from the heap memory segment !
    Some Functions For dMA :-
        * malloc()
        * calloc()
        * realloc()
        * free()
    */



    // ---------------------------------------------------------------------------------------------------------------------------



    /* MALLOC() (stands for memory allocation !) 
        * It reserves a block of memory with the given amount of bytes !
        * Return value is a void pointer which has to be casted to the needed type as per needs !
        * If the available space in the heap memory is insufficient, malloc() fails and returns a NULL pointer !
        * Values initialized at the allocated memory slots are bunch of garbage values and they need to be edited as per use !
    */


    // int* ptr1 = malloc(10*sizeof(int));
    // if (ptr1 == NULL){
    //     printf("Malloc() failure\n");
    //     return 0;
    // }

    // for (int i = 0; i < 10; i++){
    //     scanf("%d",&(ptr1[i]));
    // }    
    // for (int i = 0; i < 10; i++){
    //     printf("%d ",*(ptr1+i));
    // }




    // ---------------------------------------------------------------------------------------------------------------------------




    /* CALLOC() (stands for contiguous allocation !) 
        * It reserves n blocks of memory with the given amount of bytes !
        * Return value is a void pointer which has to be casted to the needed type as per needs !
        * If the available space in the heap memory is insufficient, calloc() fails and returns a NULL pointer !
        * Values initialized at the allocated memory slots are initialized at 0 !
    */


    // int* ptr2 = calloc(3,sizeof(int));
    // if (ptr2 == NULL){
    //     printf("Calloc() failure\n");
    //     return 0;
    // }

    // for (int i = 0; i < 3; i++){
    //     scanf("%d",&(ptr2[i]));
    // }    
    // for (int i = 0; i < 3; i++){
    //     printf("%d ",*(ptr2+i));
    // }



    // ---------------------------------------------------------------------------------------------------------------------------




    /* REALLOC() (stands for re-allocation !)
        * It reserves pre-reserved block of memory again for some other use now !
        * Return value is a void pointer which has to be casted to the needed type as per needs !
        * If dynamically allocated memory is insufficient, we can change the size of it using realloc() !
        * If the available space in the heap memory is insufficient, realloc() fails and returns a NULL pointer !
    */


    // int* ptr3 = calloc(5,sizeof(int));
    // if (ptr3 == NULL){
    //     printf("Calloc() failure\n");
    //     return 0;
    // }

    // ptr3 = (int*) realloc(ptr3, 10*sizeof(int)); // reallocated to double the allocated memory 20 to 40 bytes 

    // for (int i = 0; i < 5; i++){
    //     scanf("%d",&(ptr3[i]));
    // }    
    // for (int i = 0; i < 10; i++){
    //     printf("%d ",*(ptr3+i));
    // }



    // ---------------------------------------------------------------------------------------------------------------------------



    /* FREE()
        * It frees the reserved block of memory from the heap, if it aint needed anymore !
        * No Return Value !
    */


    // int* ptr4 = malloc(3*sizeof(int));
    // if (ptr4 == NULL){
    //     printf("Malloc() failure\n");
    //     return 0;
    // }

    // for (int i = 0; i < 3; i++){
    //     scanf("%d",&(ptr4[i]));
    // }    

    // free(ptr4);

    // for (int i = 0; i < 3; i++){                                                                
    //     printf("%d ",*(ptr4+i));
    // }

    // ---------------------------------------------------------------------------------------------------------------------------

    return 0;
}