#include<stdio.h>

int main(int argc, char const *argv[]){


    int i = 0;
    scanf("%d",&i);

    while (i<=100){
        if (i==7){i++;continue;}
        if (i==70){break;}
        printf("Hello No. %d\n",i);
        i++;

        }
    
    
    
    
    return 0;
}