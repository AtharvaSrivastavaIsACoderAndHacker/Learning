// For checking Palindromes, iterative approach is a lot better, but for the sake of a question I did it using recursion !


// 1)  BETTER and FASTER BUT NOT MUCH READABLE
#include<iostream>
using namespace std;

int stringPalindromeCheck(const char * start, const char * end){
    if(*start != *end){return 0;}
    if(start>=end){return 1;}
    return stringPalindromeCheck(start+1, end-1);
}
void initPalindromeRecursion(string x){
    cout<<(stringPalindromeCheck(x.c_str(), x.c_str() + x.length() - 1)?"Palindrome !":"Not a Palindrome !")<<endl;
}

int main(int argc, char const *argv[]){
    
    string x;
    cin>>x;
    initPalindromeRecursion(x);
    
    return 0;
}





// =======================================================================================================





// // SIMPLER VERSION  BUT  A  BIT SLOWER
// #include<iostream>
// using namespace std;

// int stringPalindromeCheck(string x, int i, int n){
//     if( x[i] != x[n-i-1]) return 0;
//     if(i>= n-i-1) return 1;

//     return stringPalindromeCheck(x, i+1, n);
// }

// int main(int argc, char const *argv[]){
    
//     string x; cin>>x;
//     cout<<stringPalindromeCheck(x, 0, x.length())<<endl;
    
//     return 0;
// }