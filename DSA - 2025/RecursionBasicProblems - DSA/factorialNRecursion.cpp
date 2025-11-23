#include<iostream>

using namespace std;

int factorial(int x){
    if(x==0) return 1;
    return x*factorial(x-1);
}

int main(int argc, char const *argv[]){
    
    int x;
    cin>>x;
    cout<<"================================================================"<<endl;
    
    cout<<factorial(x)<<endl;
    
    return 0;
}


/*
1) This is the RECURSIVE approach for factorial calculation.
2) ITERATIVE approach is better than recursion due to lower space complexity and no stack overflow risk.
3) No direct FORMULA exists for factorial, but approximations like Stirling's formula are useful for large numbers.
*/
