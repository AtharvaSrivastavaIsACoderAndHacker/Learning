#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    int arr[10] = {123,3541,4,5,6,443,46,34,23,69};
    vector<int> v = {9,8,7,6,5,4,3,2,1,0};
    
    sort(arr, arr+9);
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
    
    return 0;
}