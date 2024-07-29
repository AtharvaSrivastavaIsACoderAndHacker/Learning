#include<stdio.h>

int main(int argc, char const *argv[]){

    /* 
    Various IO functions from stdio library are :-
        * fputc
        * fgetc
        * fputs
        * fgets
    */
    
    // FGETC
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","r");
    // char c = fgetc(ptr);
    // (void)printf("%C\n",c);
    // fclose(ptr);


    // FPUTC
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","w");
    // fputc('a',ptr);
    // fclose(ptr);


    // // FPUTC --> for appending characters
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","a");
    // fputc('a',ptr);
    // fclose(ptr);


    // FGETS
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","r");
    // char c[20];
    // fgets(c,14,ptr);
    // puts(c);
    // fclose(ptr);
    

    // FPUTS
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","w");
    // fputs("hello Atharva",ptr);
    // fclose(ptr);
    

    // FPUTS --> for appending strings
    // FILE *ptr = NULL;
    // ptr = fopen("main.txt","w");
    // fputs("hello Atharva",ptr);
    // fclose(ptr);
    


    return 0;
}