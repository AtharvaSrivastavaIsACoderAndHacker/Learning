#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // gcc -Wall -save-temps main.c     -----------------------> to split c program compilation steps/files.
    /*
    
    .i    ----------------> Preprocessing - rm comments,expands macros,imports #include files ----------> after this, saves contents to .i file
    .s    ----------------> Compilation - converts high lvl (c lang code) TO Assembly and saves it in .s assembly file
    .o    ----------------> Linking - converts Assembly to Binary (machine code)and stores it in .o (Binary) file
    .exe  ----------------> Linking - then its made an executable



    Linking ---------|
                     |
                    / \
                   /   \
                  /     \
  static linking /       \ dynamic linking -- windows dll's
    
    */


    
    
    
    return 0;
}