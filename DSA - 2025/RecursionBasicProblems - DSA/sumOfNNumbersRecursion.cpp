#include<iostream>

using namespace std;

int f(int x){
    if(x==0) return 0;
    return x+f(x-1);
}

int main(int argc, char const *argv[]){
    
    int x;
    cin>>x;
    cout<<"================================================================"<<endl;
    
    cout<<f(x)<<endl;
    
    return 0;
}




/* 
1) This was the RECURSIVE approach for this summation problem.
2) ITERATIVE approach for this problem is way better.
3) FORMULA based aproach is the best --> summation n = n*(n+1)/2;
*/