#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort 
    // This algo compares the first element to the second, if first is greater, it swaps it with the second element (is sorting ascondingly, if desconding u swap if first is less than 2nd)
    // Then u compare the 2nd and the 3rd, if they are in the wrong order u push the initially-at-first-place-value even further
    // this was the inner loop , now u do that pushing thing with the second element
    // in this algo, in the 1st iteration of outer loop, the largest element reaches it's place, in the 2nd iteration, the 2nd largest element reaches it's place, so we can omit last places to save time as they are permanently sorted into right place 
    // worst/average case time complexity = O(N^2)
    // best case time complexity = O(N) that's if its already sorted

    // Ascending Order Sort
    
    bool didSwappingEvenHappenThroughout = false;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j]>arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwappingEvenHappenThroughout = true;

            }
        }
        if(!didSwappingEvenHappenThroughout) break; // when no swaps occur during the j loop, this means array is already sorted, so there's no need to run any further !
    }

    cout<<endl;
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";

    

    return 0;
}
