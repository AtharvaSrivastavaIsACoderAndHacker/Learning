// 1) USING TWO PTRs

// #include<iostream>

// using namespace std;

// void reverse(int* arr, int* end){ // Recursion using two pointers
//     // if(arr == end) return; // for odd number of items in array
//     // if(arr == end+1) return; // for even 
//     // |--> naive approach above

//     if(arr>=end) return; // BETTER APPROACH
    
//     int temp = *arr;
//     *arr = *end;
//     *end = temp;
    
//     reverse(arr+1, end-1);

// }

// int main(int argc, char const *argv[]){
    
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
//     reverse(arr, arr-1+sizeof(arr)/sizeof(arr[0]));
    
//     for(int i : arr){
//         cout<<i<<endl;
//     }
    
//     return 0;
// }



// =======================================================================================================================================



// 2) USING ONE PTR

#include<iostream>

using namespace std;

void reverse(int* arr, int size){ // Recursion using ONE pointer
    int * end = arr + size - 1;
    if(arr>=end) return;
    
    int temp = *arr;
    *arr = *end;
    *end = temp;
    
    reverse(arr+1, size-2);

}

int main(int argc, char const *argv[]){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    reverse(arr, sizeof(arr)/sizeof(arr[0]));
    
    for(int i : arr){
        cout<<i<<endl;
    }
    
    return 0;
}





// =====================================================================================================================================


// See iterative approach is way better for reversing an array, just for learning's sake i used recursion
// one ptr and two ptr versions both work with identical perfrmance and almost equal timeSpace complexity so removing one ptr was just for some mind boggling puzzle --> it was a problem question that how would you manage recursiveReversal in less data
// so 3) ITERATIVE is better