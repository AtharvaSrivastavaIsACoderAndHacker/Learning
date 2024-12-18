#include<iostream>

using namespace std;


int sum(int a, int b){
    return a+b;
}

// Function Prototype (Syntax) :-
// type functionName(args);
// int subtract(int a, int b);
        // or
int subtract(int, int);



int main(int argc, char const *argv[]){
    
    int a,b;
    cin>>a;
    cin>>b;
    cout<<sum(a,b)<<endl;
    cout<<subtract(a,b)<<endl; // ive declared subtract() after main() so it's throwing error, i need a function prototype above main() !
                               // remove prototype line from above to see that error
    
    return 0;
}

int subtract(int a, int b){
    return a-b;
}