#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    std::pair<int,char> p = {1,'I'};
    pair<int, pair<int,char>> nestedP = {1, p};
    pair<pair<int,int>, pair<int,int>> nestedIntP = {{1,2}, {3,4}};

    cout<<p.first<<" and "<<p.second<<endl;
    cout<<nestedP.first<<" and "<<nestedP.second.first<<" and "<<nestedP.second.second<<endl;
    cout<<nestedIntP.first.first<<" , "<<nestedIntP.first.second<<" , "<<nestedIntP.second.first<<" and "<<nestedIntP.second.second<<endl;


    return 0;
}