#include <stdio.h>
int createAndIncrementStaticVariable(){
    // static int count; // see, count++ in the line below increments count to be 1, wich means it was automatically assigned a value, 0 !
    static int count = 0; // this line will be skipped in the next bcoz the variable will already be declared in it's previous iteration !s
    count++;
    return count;
}
int a = 0; // global variable
int main(int argc, char const *argv[]){

    // If a local and a global variable share the same name, local variable will take precedence !
    // Static Variables have a property of preserving their values even if they go out of scope !
    // These statically initialized variables remain in the memory throughout the span of the program which in many cases, wastes memory only !
    // Due to this wastage of memory,making global and static variables isn't encouraged !
    // They are initialized to be 0 if not assigned a value explicitly !
    // Static variables can only be initialized with a constant Rvalue bcoz all Static variables are allocated with memory before runtime !
    // Before runtine, no function can be declared ! Function Bana Hi Nahi To Run Hokar Value b Mein Kaise Daal Degaaaa !
    // static int ab = createAndIncrementStaticVariable(); will wrong !


    printf("%d\n", createAndIncrementStaticVariable());
    printf("%d\n", createAndIncrementStaticVariable());
    printf("%d\n", createAndIncrementStaticVariable());

    int a = 9; // local variable
    printf("%d\n", a); // see, local variable is printed, it took precedence over global one ! If Line17 is commented, 0 will be printed !
    return 0;
}