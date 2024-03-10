#include<stdio.h>

int main(int argc, char const *argv[]){



    // can also work as an infinite loop
    /*
    z:
    printf("Hello\n");
    goto z;
    */



    int i = 0;
    scanf("%d",&i);

    while (i<=100){
        if (i==66){goto aLabelAtTheEnd;}
        printf("Hello No. %d\n",i);
        i++;
        }

    aLabelAtTheEnd:




    return 0;
}