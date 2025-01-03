// INLINE  FUNCTIONS !

// #include<iostream>
// using namespace std;
// inline int sum(int x, int y){ // instead of copying actual to formal args, calculating , returning and handling memory, it just 
//                               // substitutes the code in place of the function call !
//     return x+y;
// }

// int main(int argc, char const *argv[]){

//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<sum(a,b)<<endl;
//     return 0;
// }



// ===========================================================================================================================



// DEFAULT ARGUMENTS !

// #include<iostream>
// using namespace std;  
// int consoleLog(int y, int x=20){// def  args should be the rightmost because if x is a def arg, all to the right must also be !
//     cout<<y<<"  "<<x<<endl;
// }
// int main(int argc, char const *argv[]){
    
//     https://www.geeksforgeeks.org/default-arguments-c/
//     consoleLog(100, 200);
//     consoleLog(100);

//     return 0;   
// }



// ===========================================================================================================================



// CONSTANT ARGUMENTS !

// #include<iostream>
// using namespace std;  
// int consoleLog(const int *y){
//     // ++(*y); // this is invalid now, now neither actual nor formal parameter can be changed if 'const' bro is right behind them !!!!!
//     cout<<*y<<endl;
// }
// int main(int argc, char const *argv[]){
    
//     int y = 10;
//     consoleLog(&y);

//     return 0;   
// }