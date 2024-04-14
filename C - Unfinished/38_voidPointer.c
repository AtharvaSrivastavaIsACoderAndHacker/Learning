#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // Void pointer is a pointer that has no datatype associated with it !
    // void pointer can easily be typecasted into any pointer type !
    // We can't dereference void pointers directly without a typecast !
    // In C Standards, pointer arithmetic isn't allowed on voidPointers, it isn't recommended to use ptrArithmetic on voidPointers !

    int a = 10;
    float b = 100.209;
    void* ptr = &a;
    // printf("%d\n",*ptr); // --> We can't dereference a voidPointer without a typecast because, it's not associated to any datatype !
    printf("%d\n",*((int*)ptr)); // --> Now We Can Use It !
 
    ptr = &b;
    printf("%f\n",*((float*)ptr)); // --> Now We Can Use It !


    // See, I uses one pointer valiable to point at two variables at two different times, without creating two pointers !

    return 0;
}