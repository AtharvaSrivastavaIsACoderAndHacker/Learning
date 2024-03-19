#include<stdio.h>

// Actual Use of typedef -----> oldName is the whole struct syntax and space stC gives "struct Candidate", a nickname "stC"
typedef struct Candidate {
    int id;
    char name[35];
} stC;



typedef int integer;
typedef int integerKaBeta; // a keyword can also be assigned multiple alias names at once !
typedef char charMinar;

int main(int argc, char const *argv[]){
    
    // I named this file as 31_typedeff.c because we cant use a C Language keyword in the filename or as an identifier so I added another 'f' !
    // typedef syntax --> typedef <oldName> <aliasName>
    // Typedef can be used in and out of main() function but we use it outside of main() function to increase its scope !
    // typedef is used to kinda nicknaming C keywords for example, typedef int integer -----> now you can use integer keyword in place of int !

    int a = 0;
    integer b = -10;
    integerKaBeta bb = -20;
    charMinar c = 'a';

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", bb);
    putchar(c);
    


    // Actual Uses of typedef
    // USE 1
    stC c1 = {420,"Candidate1"}; // this line is same as --> struct Candidate c1 = {420,"Candidate1"}; -----> tadaaa, zindagi hui asaaannnn !




    // USE 2
    // int* a,b; // I wanted to create two pointers but actually,compiler interpretes it in a different way, a is an intPointer and b is an int
    // instead, I can make a and b as desired in this way :-
    typedef int* intPointer;
    intPointer a,b; // now, both a and b are integer pointers !!!!!

    // Haan wo alag baat hai ki aise bhi kiya jaa sakta hai but..... hehehehehehheheheheheheheheheh :-
    int* c;
    int* d;
    

    
    return 0;
}