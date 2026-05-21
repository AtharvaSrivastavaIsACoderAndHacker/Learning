#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Selection Sort
    // This algo scans the array for min element and swaps it with the first index !
    // Then scans the remaining array, excluding the first (settled one) and then places it at the second position in the array !
    // So if the no of inputs is N, the loops run for x no of times where x is --> N + N-1 + N-2 ... + 1 
    // summation of 1 to N is the no. of times the loops run and the no. of operations it takes to sort a N length array !
    // Summation of 1 to N => N(N+1)/2
    // So the worst case time complexity of this algo is O(N^2), n squared woahhhh !
    //  for Selection Sort, Best, Worst and Average time complexity are all same as it's deterministic and runs the same no. of times no matter the arrangement of the array




    // My DIY implementation, i won't change it, it'd be a bit odd as i haven't seen the tutorial yet, it's paused, its a DIY
    // same can be done for ascending order aswell, this is Descending !
    for (int i = 0; i < n-1; i++) { // if N = 5, oonly 0 to 3 is needed not full 0 to 4, cause last in automatically sorted, inner loop goes till last cause it has to compare full array
        int maxIndex = i;
        for (int j = i+1; j < n; j++) { // i+1 because arr[i] is already scanned into the var by default ! i+1 to n-1 as after each iteration of outer, this will only consider the then remaining part of the array and not the whole, excluding the initial, sorted elements
            if(arr[j]>arr[maxIndex]){
                maxIndex = j;
            }
        }
        if (i == maxIndex) continue; // skip if the 
        // swap
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
        
    }

    cout<<endl;
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}
