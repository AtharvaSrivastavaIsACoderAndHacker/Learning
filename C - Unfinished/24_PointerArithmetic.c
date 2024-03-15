#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int a = 34;
    int* ptr = &a; // currently &a == 6422292
    printf("*ptr : %d\n", *ptr); // prints value of a
    printf("ptr : %d\n", ptr);  // prints &a 
    printf("ptr+1 : %d\n", ptr+1);  // prints sizeof(int)*1 added to the & of a
    printf("ptr+2 : %d\n", ptr+2);  // prints sizeof(int)*2 added to the & of a
    printf("ptr-1 : %d\n", ptr-1);  // prints sizeof(int)*1 subtracted from the & of a
    ++ptr;
    printf("*(ptr)--> 1 is added : %d\n", *ptr); // no longer prints value of a, prints output same as line-11
    printf("ptr--> 1 is added : %d\n", ptr);
    --ptr;
    printf("*(ptr)--> 1 is subtracted, back to normal : %d\n", *ptr); // prints value of a
    printf("ptr--> 1 is subtracted, back to normal : %d\n", ptr);


printf("------------------------------------------------------------------------------------\n");


    char b = 'A';
    char* ptrb = &b; // currently &b == 6422291
    printf("*ptrb : %c\n", *ptrb); // prints value of b
    printf("ptrb : %d\n", ptrb);  // prints &b
    printf("ptrb+1 : %d\n", ptrb+1);  // prints sizeof(char)*1 added to the & of b
    printf("ptrb+2 : %d\n", ptrb+2);  // prints sizeof(char)*2 added to the & of b
    printf("ptrb-1 : %d\n", ptrb-1);  // prints sizeof(char)*1 subtracted from the & of b
    ++ptrb;
    printf("*(ptrb)--> 1 is added, now pointing to int a : %d\n", *ptrb); //prints value of int a because ++ptrb added 1 to 6422291 and made the pointer to point int a
    printf("ptrb--> 1 is added, now pointing to int a : %d\n", ptrb);
    --ptrb;
    printf("*(ptrb) %%d --> 1 is subtracted, back to normal : %d\n", *ptrb); //prints ascii value of A which is 65 
    printf("*(ptrb) %%c --> 1 is subtracted, back to normal : %c\n", *ptrb); //prints char b wih is 'A'
    printf("ptrb--> 1 is subtracted, back to normal : %d\n", ptrb); 

    return 0;
}