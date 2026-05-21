#include <iostream>
using namespace std;

int main() {
   
    // Insertion Sort
    // Assume the first element to be in a separate array and its dorted, no take the 2nd element and append it the the shorter array or just consider it, no need to make a new array, if it's in order, keep it there, swap with prev only when it's not in order, 
    // Now in the next outer loop iteration, consider the next elemtn from the remaining array and move it through the place till it cannot move left any further !
    // Worst/Average case time complexity --> O(N^2)
    // Best Case Time complexity (happens if the array is already sorted) --> O(N)
    
    cout<<"Insertion Sort !"<<endl;
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // My Naive DIY approach
    // Ascending Order Sort
    /*
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j > 0; j--) {
            if(arr[j]<arr[j-1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;

            }
            else{break;}
        }
    }
    */


    // Ascending Order Sort
    // How it's actually done !
    // here, instead of doing reverse bubble sort like i did above, we do shift the whole unordered part right and then insert the key before all the elements that are greater than it, that have shifted right !
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        // now if key<the prev elements, ie if key<arr[j], shift arr[j] to key and repeat shifting till key's rightful place comes
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    cout<<endl;
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}
