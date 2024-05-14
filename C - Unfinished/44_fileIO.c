#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // Firstly, we have to create a file pointer !
    // Basic fileIO functions are there in stdio.h itself as it is names as "io" !
    /* 
    It has functions like :-
        * fopen()
        * fclose()
        * fscanf() --> file needs to be opened in read mode !
        * fprintf() --> file needs to be opened in write mode !
        * (and many more !)
        * 
     */

    // r = READ !
    // w = erase everything else and WRITE !
    // a = do not erase anything just APPEND at the content stored !
    // rb = READ BINARY

    // Any and Every file that is opened, needs to be closed !


    // READING A FILE 
    // FILE* f = NULL; 
    // f = fopen("hello.txt","r");
    // char info[30];
    // fscanf(f,"%s",info);
    // printf("%s\n",info);
    // fclose(f);

    // WRITING A FILE 
    // FILE* ff = NULL; 
    // ff = fopen("hello.txt","w");
    // char infoo[30] = "HELLO";
    // fprintf(ff,"%s",infoo);
    // fclose(ff);

    // APPENDING A FILE 
    // FILE* fff = NULL; 
    // fff = fopen("hello.txt","a");
    // char infooo[30] = " ISHI";
    // fprintf(fff,"%s",infooo);
    // fclose(fff);



    return 0;
}