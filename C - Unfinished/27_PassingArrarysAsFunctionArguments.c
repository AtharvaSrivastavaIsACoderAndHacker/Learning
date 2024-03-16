#include<stdio.h>

void iterateAndPrintArrayByPassingTheArray(int arr[],int count){ // Passed array using callByValue, array is passed directly, 
                                                                 // so, changes will reflect in the actual array in main() function !
    for (int i = 0; i < count; i++){                                                                
        printf("%d ",arr[i]);
    }
    
}
void iterateAndIncrementArrayByPassingTheArray(int arr[],int count){ // Passed array using callByValue, array is passed directly, 
                                                                 // so, changes will reflect in the actual array in main() function !
    for (int i = 0; i < count; i++){
        ++arr[i];                                                                 
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

    iterateAndIncrementArrayByPassingTheArray(array10, 10); // eachElementIsIncremented&Printed in the fucntion & is also done to actual array !
    printf("\n");

    iterateAndPrintArrayByPassingArrayPointer(&array20[0], 20);
    

    printf("\n");
    for (int i = 0; i < 10; i++){ // increment reflects the array in main() also because here, a copy of the array is NOT passed like in case
    // of int, array is converted to pointers automatically, and then passed to the function, thats why changes are reflected in actual array
        printf("%d ",array10[i]);
    }

    return 0;
}