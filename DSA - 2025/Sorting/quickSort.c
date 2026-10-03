#include<stdio.h>

// I wront this myself and maybe the naive approach pls don't judge Y-Y
// But it works yayyyyyy, without the tutorial
// uses Lomuto's technique, i jsut saw the animation , and did not even watch it completely, i wanted minimum spoilers, so i wrote this almost fully myself, just needed to confirm a few things like "does quicksort use nested loops? no code"
void quickSortFirstTry(int * ori, int low,int pivotPos, int high){
    // To sort out the situation when the pivot is accidentally the highest
    int highest = 1; // first assuming it's the highest, then later will correct this by contradiction

    int * ptrSatisfying = ori+low;
    if(low>=high){return;}
    for(int i = low; i<=high; i++){
        if(ori[i]<ori[pivotPos]){
            ptrSatisfying = (ori+i);
        }
        else if(ori[i]==ori[pivotPos]) continue;
        else{
            highest = 0;
            ptrSatisfying = (ori+i);
            while((ptrSatisfying<=(ori+high)) && (*ptrSatisfying>ori[pivotPos])){
                ptrSatisfying++;
            }
            if(ptrSatisfying==(ori+high + 1)){
                    int temp = ori[i-1];
                    ori[i-1] = ori[pivotPos];
                    ori[pivotPos] = temp; // final placement of ori[pivotPos]
                    pivotPos = i-1;
                    break;
            }
            int temp = ori[i];
            ori[i] = *ptrSatisfying;
            *ptrSatisfying = temp;
        }
    }
    if(highest==1){ // oooof, O(n^2) nooooooooooooooooo ! but still for it to atleast work
        int temp = ori[high];
        ori[high] = ori[pivotPos];
        ori[pivotPos] = temp; // final placement of ori[pivotPos]
        pivotPos = high;
    }

    quickSortFirstTry(ori, low, low , pivotPos-1); // left side
    quickSortFirstTry(ori, pivotPos+1, pivotPos+1, high); // right side
}


// Using Almost Hoare's Algorithm, Yes I tried to write this one myself as well. and it workssss yayyyyy ! but it isn't the best at readability !
void quickSortSecondTryNowWithHoare(int * ori, int low,int pivotPos, int high){
    int* i = ori+low;
    int* j = ori+high;
    if(low>=high){return;}

    while(i<=j){
        if(*i<=ori[pivotPos] && *j>=ori[pivotPos]){ // both correct
            i++;
            j--;
            continue;
        }
        else if(*i>ori[pivotPos] && *j<ori[pivotPos]){ // both mismatched
            int temp = *i;
            *i = *j;
            *j = temp;
            i++; j--;
            continue;
        }
        if (*i<=ori[pivotPos]) i++; // only i is correct
        if (*j>=ori[pivotPos]) j--; // only j is correct

    }

    // now i > j definitely ! and only one step ahead ! 
    // but if pivot is the largest or smallest element, and at the first or last place respectively, then this problem needs rectification 
    int bound = j-ori;
    int pivot = low;
    if(i-ori>high){
        i--;bound = i-ori;
        int temp = *i;
        *i = ori[pivotPos];
        ori[pivotPos] = temp;
        pivotPos = bound;
    } // pivot is largest and the first element -- right side is non-existent
    if(j-ori<low){
        pivot = high;
        j++;bound = j-ori;
        int temp = *j;
        *j = ori[pivotPos];
        ori[pivotPos] = temp;
        pivotPos = bound;
    }  // pivot is smallest and the last element

    quickSortSecondTryNowWithHoare(ori, low, pivot , bound); // left side
    quickSortSecondTryNowWithHoare(ori, bound+1, bound+1, high); // right side
}


// Final one and this is the official or the one that is taught ! It uses Hoare's algo ! I wont write this myself !
int partitionArray(int* arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j){
        while(i<high && arr[i]<=pivot){
            i++;
        }
        while(j>low && arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quickSort(int * arr, int low, int high){
    if (low < high) {
        int pivotIndex = partitionArray(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}



int main(){
    
    /*
    QuickSort is a sorting algorithm based on the Divide and Conquer that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array. .

    There are mainly three steps in the algorithm:

    Choose a Pivot: Select an element from the array as the pivot. The choice of pivot can vary (e.g., first element, last element, random element, or median).
    Partition the Array: Re arrange the array around the pivot. After partitioning, all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right.
    Recursively Call: Recursively apply the same process to the two partitioned sub-arrays.
    Base Case: The recursion stops when there is only one element left in the sub-array, as a single element is already sorted.
    */

    // PIVOT SELECTION MATTERS A LOT, A SIMPLE FIRST OR LAST ELEMENT GIVES O(N^2) FOR WHEN THE ARRAYS ARE SORTED OR NEARLY SORTED
    // A RANDOM ELEMENT IS ALMOST THE BEST, ENSURING THAT IN MOST LIKELY CASES YOU'LL NOT GET O(N^2)
    // A MEDIAN, MEDIAN OF 3 OR MEDIAN OF 9 ALGORITHM OF PIVOT SELECTION IS THE MOST USED ONE

    // most tutorials only show Lomuto due to RELATIVE simplicity, but Hoare's is generally more efficient !



    // Input
    int len; scanf("%d", &len);
    int arr[len];
    int brr[len];
    int crr[len];
    for (int i = 0; i < len; i++){ 
        scanf("%d", &arr[i]);
        brr[i] = arr[i];
        crr[i] = arr[i];
    }

    for (int i = 0; i < len; i++){ 
        printf("%d ", arr[i]);
    }
    printf("\n");




    // Sorting
    quickSortFirstTry(arr, 0, 0, len-1);
    for (int i = 0; i < len; i++){ 
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSortSecondTryNowWithHoare(brr, 0, 0, len-1);
    for (int i = 0; i < len; i++){ 
        printf("%d ", brr[i]);
    }
    printf("\n");

    quickSort(crr, 0, len-1);
    for (int i = 0; i < len; i++){ 
        printf("%d ", crr[i]);
    }
    printf("\n");
    

    return 0;
}