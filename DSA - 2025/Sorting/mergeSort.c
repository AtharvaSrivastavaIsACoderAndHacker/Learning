#include<stdio.h>

// THIS IS ALL FOR ASCENDING






// NAIVE MERGER
// let me do my NAIVE FIRST TIMER APPROACH first, will explain later
void mergeTwoSortedArraysNAIVE(int* arr, int * brr, int aLen, int bLen, int * crr){
    int counter = 0, i = 0, j = 0;
    while(i < aLen&&j<bLen){
        if(arr[i]>brr[j]){
            // if j isn't at the last elememt
            crr[counter] = brr[j];
            j++;
        }
        
        else{
            // if i isn't at the last elememt
            crr[counter] = arr[i];
            i++;
        }
        counter++;
    }
    while((i==aLen) ? (j<bLen) : (i<aLen) ){
        crr[counter++] = (i==aLen) ? (brr[j++]) : (arr[i++]);
    }
    
}
void mergeSortNaive(int* ori, int len){
    int left = len/2;
    int right = len-left;
    int leftArr[left];
    int rightArr[right];
    for(int i = 0; i < left; i++){
        leftArr[i] = ori[i];
        printf("%d ", leftArr[i]);
    }
    printf("\n");
    for(int i = len-right; i < len; i++){
        rightArr[i-left] = ori[i];
    }

    if(len == 2){
        mergeTwoSortedArraysNAIVE(leftArr, rightArr, left, right, ori);
        return;
    }
    if(len == 1){
        return;
    }

    mergeSortNaive(leftArr, left);
    mergeSortNaive(rightArr, right);

    mergeTwoSortedArraysNAIVE(leftArr, rightArr, left, right, ori);    
}




// REAL - not too far but still it doesn't create new arrays at every recursion, so it WAYYYY MORE EFFICIENT
void mergeTwoSortedArrays(int* arr, int * brr, int aLen, int bLen, int * crr){
    int counter = 0, i = 0, j = 0;
    while(i < aLen && j < bLen){
        if(arr[i]>brr[j]){
            crr[counter++] = brr[j++]; 
        }
        else{
            crr[counter++] = arr[i++];
        }
    }
    while((i==aLen) ? (j<bLen) : (i<aLen) ){
        crr[counter++] = (i==aLen) ? (brr[j++]) : (arr[i++]);
    }
    
}
void mergeSort(int* ori, int* temp, int len){
    int left = len/2;
    int right = len-left;
    
    if (len <= 2){
        mergeTwoSortedArrays(ori, ori+left, left, right, temp);

        return;
    }
    if (len <= 1){
        temp[0] = ori[0];
        return;
    }
    mergeSort(ori, temp, left); // only considers the left split of ori
    mergeSort(ori + left, temp, right); // only considers the right split of ori

    mergeTwoSortedArrays(ori, ori+left, left, right, temp);

    for (int i = 0; i < len; i++)
        ori[i] = temp[i]; // INCOMPLETE BUT IM SPEEPY CMON
}



int main(){

    // input
    int len = 10;
    int arr[len];
    for (int i = 0; i < len; i++){ 
        scanf("%d", &arr[i]);
    }
    


    // Testing my NAIVE one
    // mergeSortNaive(arr, len);
    // for (int i = 0; i < len; i++){ 
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");




    // REAL ONE -- tried to write it myself but the pet peeves couldn't be noticed by me !
    int temp[len];
    mergeSort(arr, temp, len);
    for (int i = 0; i < len; i++){ 
        printf("%d ", arr[i]);
    }
    printf("\n");
    


    return 0;
}