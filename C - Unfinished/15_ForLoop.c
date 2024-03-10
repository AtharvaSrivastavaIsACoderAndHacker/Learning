#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int a;
    printf("Enter The No. Of Star Pattern Lines You Would Like : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    
    return 0;
}