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
    if(len <= 1){
        return;
    }
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


    mergeSortNaive(leftArr, left);
    mergeSortNaive(rightArr, right);

    mergeTwoSortedArraysNAIVE(leftArr, rightArr, left, right, ori);    

}



// Apparaently even this isn't upto the mark !
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
    
    if (len <= 1){
        temp[0] = ori[0];
        return;
    }
    mergeSort(ori, temp, left); // only considers the left split of ori
    mergeSort(ori + left, temp+left, right); // only considers the right split of ori

    mergeTwoSortedArrays(temp, temp+left, left, right, ori);
    for (int i = 0; i < len; i++) {
        temp[i] = ori[i];
    }
}







// FINAL official one --> Merge Sort
void mergeTwoSortedArraysFINAL(int* arr, int low, int mid, int high){
    // left --> low to mid
    // right -> mid+1 to high
    int temp[high-low+1];
    int counter = 0, i = low, j = mid+1;
    while(i < mid+1 && j < high+1){
        if(arr[i]>arr[j]){
            temp[counter++] = arr[j++]; 
        }
        else{
            temp[counter++] = arr[i++];
        }
    }
    while((i==mid+1) ? (j<high+1) : (i<mid+1) ){
        temp[counter++] = (i==mid+1) ? (arr[j++]) : (arr[i++]);
    }
    counter = 0;
    for(int ii = low; ii <= high; ii++){
        arr[ii] = temp[counter++];
    }    
}
void mergeSortFINAL(int* ori, int low, int high){
    int mid = (low+high)/2;
    
    if (low>=high){
        return;
    }
    mergeSortFINAL(ori, low, mid); // only considers the left split of ori
    mergeSortFINAL(ori, mid+1, high); // only considers the right split of ori
    mergeTwoSortedArraysFINAL(ori, low, mid, high);
}



int main(){

    // Input
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
    mergeSortFINAL(arr, 0, len-1);
    for (int i = 0; i < len; i++){ 
        printf("%d ", arr[i]);
    }
    printf("\n");
    


    return 0;
}