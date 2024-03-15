#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // Array items are stored at contiguos memory locations
    // theys can also store derived data types such as pointers, structures et cetera.
    // Arrays in C are zero-indexed, meaning the first element is accessed with index 0, not 1
    // arrays can also be initialized directly like this --> int a[2] = {2,4};


    // disadvantages:-
    //     * poor time complexity of insertion and deletion operations
    //     * wastage of memory since arrays are fixed in size
    //     * if memory isnt available in contiguous form, you will not be able to initialize your array
    //     * you cannot increase the size of your array once its declared


//----------------------------------------------------------------------------------------------------------------------------------



    // 1D array
    // int a[2];
    // a[0] = 1;
    // a[1] = 2;

    // for (int i = 0; i < 2; i++) {
    //     printf("%d\n",a[i]);
    // }
    // printf("%d\n",a[80]); // will return the no. of bytes in a memory block, that is ahead of a[1] block.
    
    


//----------------------------------------------------------------------------------------------------------------------------------




    // 2D array
    // [    [1,2]  ,  [3,4]    ]

    // int a[2][2];
    // a[0][0] = 1;
    // a[0][1] = 2;
    // a[1][0] = 3;
    // a[1][1] = 4;

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++){
    //         printf("%d\n",a[i][j]);
    //     }
    // }   


    

//----------------------------------------------------------------------------------------------------------------------------------




    // 3D array
    // [   [ [1,2]  ,  [3,4] ]  , [ [5,6]  ,  [7,8] ]    ]

    // int a[2][2][2];
    // a[0][0][0] = 1;
    // a[0][0][1] = 2;
    // a[0][1][0] = 3;
    // a[0][1][1] = 4;
    // a[1][0][0] = 5;
    // a[1][0][1] = 6;
    // a[1][1][0] = 7;
    // a[1][1][1] = 8;

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++){
    //         for (int k = 0; k < 2; k++){
    //             printf("%d\n",a[i][j][k]);
    //         }
    //     }
    // }   



//----------------------------------------------------------------------------------------------------------------------------------
    
    return 0;
}