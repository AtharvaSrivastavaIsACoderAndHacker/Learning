#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main(int argc, char const *argv[]){
    
    // Function pointer points to the start of the function instruction !
    int (*addPtr) (int, int) = &add; // functionPointer delaration and initialisation !



    // (void)printf("%d\n",(*addPtr)(64,5)); // usage

    int a = (*addPtr)(64,5);
    (void)printf("%d",a); // easier usage

    return 0;
}