#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int age;
    scanf("%d",&age);


    if (age >= 18){
        printf("Yeah, You Can Vote!\n");
    }
    else if (age == 0){
        printf("Pehle Paida To Ho Jaao Yrr !\n");
    }
    else{
        printf("Sorry, You Cannot Vote !\n");
    }
   
    return 0;
}
