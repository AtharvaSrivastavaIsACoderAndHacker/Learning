#include<iostream>

using namespace std;

void f(int x,int start){
    if(start>x) return;
    f(x, start + 1);
    cout<<start<<endl;
}

int main(int argc, char const *argv[]){
    
    int x;
    cin>>x;
    cout<<"================================================================"<<endl;
    
    f(x, 1);
    
    return 0;
}