#include<stdio.h>

void iterateAndPrintArrayByPassingTheArray(int arr[],int count){ // Passed array using callByValue
    for (int i = 0; i < count; i++){
        printf("%d ",arr[i]);
    }
    
}
void iterateAndPrintArrayByPassingArrayPointer(int* arr,int count){ // Referenced array using callByReference
    for (int i = 0; i < count; i++){
        printf("%d ",*(arr+i));
    }
    
}

int main(int argc, char const *argv[]){
    
    int array10[10] = {0,1,2,3,4,5,6,7,8,9};
    int array20[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    iterateAndPrintArrayByPassingTheArray(array10, 10);
    printf("\n");
    iterateAndPrintArrayByPassingArrayPointer(&array20[0], 20);
    
    return 0;
}