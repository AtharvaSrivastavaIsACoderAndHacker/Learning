// Ok so this is code is copied from my earlier repos when I was learning C, I didnt want to write the same thing for the same concept twice, reused ! EVEN THIS LINE IS COPIED BRUH !


// // RECURSIVE METHOD FOR FACTORIAL
// #include<stdio.h>

// long long int factorial(int n) {
    
//     if (n == 1 || n == 0) {
//         return 1;
//     }
//     long long int facto = (n)*(factorial(n-1));

//     return facto;
// }

// int main(int argc, char const *argv[]){
    
//     // any problem that can be solved recursively can also be solved iteratively !
//     // In recursion , there are base and recursive cases

//     int n;
//     printf("Enter A Number To Get Its Factorial : ");
//     scanf("%d",&n);
//     printf("Factorial Of %d Is %d\n", n,factorial(n));
    
//     return 0;
// }





// --------------------------------------------------------------------------------------------------------------------------------





// ITERATIVE METHOD FOR FACTORIAL
// #include<stdio.h>

// int main(int argc, char const *argv[]){
    
//     int n;
//     printf("Enter A Number To Get Its Factorial : ");
//     scanf("%d",&n);
//     int factorial = 1;

//     for (int i = 1; i<=n; i++){
//         factorial *= i;
//     }

//     printf("Factorial Of %d Is %d\n", n,factorial);
    
    
//     return 0;
// }