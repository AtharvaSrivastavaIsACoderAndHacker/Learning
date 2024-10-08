#include<stdio.h>

int main(int argc, char const *argv[]){
    
    
    // argc == no. of arguments supplied (by default/always 1)
    // argv == array of pointers to each argument ! 1st argument is always the filename (path to the file !) !

    if(argc>1){
        for (int i = 0; i < argc; i++){
            (void)printf("%d %s\n",i,argv[i]);
        }
    }
    
    
    return 0;
}