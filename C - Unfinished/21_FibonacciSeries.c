// // // RECURSIVE METHOD FOR FIBONACCI SERIES ----> poor approach for fibonacci (not always poor, recursion in good in many cases),
//                                                   poor time complexity and unnecessary function calls grow exponentially by input

// #include<stdio.h>

// int fibonacciRecursive(int n) {
    
//     if (n == 1 || n == 2) {
//         return n-1;
//     }
//     return fibonacciRecursive(n-1)+fibonacciRecursive(n-2); 
// }
// int main(int argc, char const *argv[]){
    
//     int n;
//     printf("Enter A Number To Get Fibonacci Series : ");
//     scanf("%d",&n);
//     printf("Fibonacci Series %dth Element Is %d\n", n,fibonacciRecursive(n));
    
//     return 0;
// }





// --------------------------------------------------------------------------------------------------------------------------------





// // ITERATIVE METHOD FOR FIBONACCI SERIES ----> good approach
// #include<stdio.h>

// int fibonacciIterative(int n) {
    
//     int a = 0;
//     int b = 1;
//     printf("%d %d ",a,b);
//     for (int i = 0; i < n-2; i++){
//         int s = a;
//         a = b;
//         b = s + b;
//         printf("%d ",b);
//     }
    
// }

// int main(int argc, char const *argv[]){
    
//     int n;
//     printf("Enter A Number To Get Fibonacci Series : ");
//     scanf("%d",&n);
//     fibonacciIterative(n);
    
    
//     return 0;
// }