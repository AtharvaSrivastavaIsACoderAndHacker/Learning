#include<stdio.h>

int main(int argc, char const *argv[]){
    
    https://youtu.be/iOTf_ZgrU20?si=JXfGwuTWkJcupqrx&t=260 --> CWH video reference

    printf(__DATE__); // --> MMM DD YYYY
    printf("\n");
    printf(__TIME__); // --> HH:MM:SS
    printf("\n");
    printf(__FILE__); // --> fileName
    printf("\n");
    printf("%d",__LINE__); // --> an int depending on the line no. its used for eg --> this is line 13 !
    printf("\n");
    printf("%d",__STDC__); // --> 1 is substituted here if the compiler follows the ANSI standard and 0 if it doesnt ! 
    printf("\n");
    printf("%d",__STDC_VERSION__); // --> This macro holds the C Standard’s version number in the form yyyymmL --> 201112 = 2011 Revision of C !
    printf("\n");
    printf("%d",__VERSION__); // --> This macro expands to a string constant which describes the version of the compiler in use !
    printf("\n");


    // There are a lot more of them to explore !
    https://gcc.gnu.org/onlinedocs/cpp/Predefined-Macros.html --> Predefined Macros Reference
    
    
    return 0;
}