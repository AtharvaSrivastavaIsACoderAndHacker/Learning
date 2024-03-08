#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int a;
    scanf("%d",&a);


    // Switch Cases Can ALways Be Nested !

    switch (a){
    case 0:
        printf("0");
        break;

    case 1:
        printf("1");
        break;
    
    default: // Its always executed,but because break statements in the cases 0&1, default isnt executed.
        printf("Its neither 1 nor 0 !");
        break;
    }   
    
    
    return 0;
}