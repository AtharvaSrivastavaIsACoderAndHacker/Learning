#include<stdio.h>

int add(int a,int b){
    return a+b;
}
void addAndPrint(int a,int b){
    printf("%d\n",a+b);
}



int main(int argc, char const *argv[]){
    
    
    printf("%d\n",add(10,20));
    addAndPrint(10,20);

    /*
    a function can be of 4 types :-
        * without arguments and without return value
        * with arguments and without return value
        * without argument and with return value
        * with arguments and with return value
    */
    
    
    return 0;
}