#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int printt(int (*fPtr)(int, int)){
    (void)printf("%d\n",fPtr(10,5));
}



int main(int argc, char const *argv[]){
    
    // CallBack Functions are functions which accept other functions' pointers !
    // Just like printt() accepts pointers from both add and subtract functions and executes them accordingly !
    // printt() ko jo bhi function doge usme vo 10,5 daalkar chala dega aur print kar dega !

    int (*addPtr) (int, int) = &add; // making functionPointers to pass to printt()
    int (*subPtr) (int, int) = &subtract;

    printt(*addPtr); // add() mein 10,5 daalkar chala dega
    printt(*subPtr); // subtract() mein 10,5 daalkar chala dega
    
    return 0;
}