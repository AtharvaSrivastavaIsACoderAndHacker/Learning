#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // printing arr[i] is same as printing *(arr+i)


    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    printf("& of 0th index --> arr  :  %d\n",(arr)); // arr as a pointer, points to its 0th index, so this will print address of 0th index
    printf("Value of 0th index --> *arr  :  %d\n",*(arr)); // arr as a pointer, points to its 0th index and * retrieves its value

printf("------------------------------------------------------------------------------\n");

    printf("value of 2nd index --> *(arr+2)  :  %d\n",*(arr+2)); 
    // ^^^^^ prints 3 because arr as a pointer, points to its 0th index and & of 0th index + 2 is &2nd index :-
    // because arrays are stored at contiguos memory locations

printf("------------------------------------------------------------------------------\n");

    for (int i = 0; i < 4; i++) {
        int address = arr + i; // implicit typecasting warning is there but this is just to demonstrate and this isnt used practically anywhere
        printf("&arr[%d] is %d\n",i,address); // 4 will be added to the & of indexs every time bcoz sizeof(int) in my architecture is 4 !
        printf("Value at %d is %d\n",address,*(arr+i));  // will print ith value
    }

printf("------------------------------------------------------------------------------\n");


    if(arr == &arr[0]) // proved that arr as a pointer, points to its 0th index, so it will return address of 0th index !
        printf("True\n");


printf("------------------------------------------------------------------------------\n");


    if ((arr[1]) == *(arr+1)) // proved that arr[i] == *(arr+i)
        printf("True\n");


printf("------------------------------------------------------------------------------\n");

    // arr++; // will give an error bcoz arr as a pointer, points to its 0th index, and, its a constant we can make a pointer to edit this:-
    int* arrPtr = arr;
    printf("%d\n", arrPtr);
    arrPtr++; // this == a legal statement
    printf("%d\n", arrPtr); // 4 got added bcoz as we know, pointer + int adds sizeof(int) to the addredd that pointer is storing


    return 0;
}