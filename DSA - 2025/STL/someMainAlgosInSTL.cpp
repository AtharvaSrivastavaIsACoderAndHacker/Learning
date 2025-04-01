#include<iostream>
#include<bits\stdc++.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[]){
    
    int arr[10] = {123,3541,4,5,6,443,46,34,23,69};
    vector<int> v = {9,8,7,6,5,4,3,2,1,0};
    
    sort(arr, arr+9); // start pos, end pos --> you can sort a specific part of the array too, not necessrily the whole array !
    sort(v.begin(), v.end());

    for(int i : arr){
        cout<<i;
        if(i != arr[sizeof(arr)/sizeof(int) - 1] ) cout<<" , ";
        else cout<<endl;
    }
    for(int i : v){
        cout<<i;
        if(i != *(v.end() -1) ) cout<<" , ";
        else cout<<endl;
    }

    // sort(startPos, endPos, comp); // 'comp' is a boolean function which is built-into STL ! you can write your own comparator !
    // __builtin_popcount() and __builtin_popcountll() --> counts set bits in the numbers provided !
    // next_permutation() --> usually used with strings !
    // max_element() --> returns a ptr to that element, you have to dereference it !

    string a = "123";
    next_permutation(a.begin(),a.end());    
    cout<<a<<endl;

    cout<<*max_element(v.begin(), v.end())<<endl;
    
    return 0;
}