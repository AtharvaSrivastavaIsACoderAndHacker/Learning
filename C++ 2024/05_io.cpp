#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    // in cpp, sequences of bytes corresponding to io are called streams !
    // iStream = flow of bytes from inputDevice to memory
    // oStream = flow of bytes from memory to outputDevice
    
    // cout -- output to terminal - uses insertion operator <<
    // cin -- input from terminal - uses extraction operator >>

    int num;
    cin>>num;
    cout<<"num = "<<num;
    
    
    
    return 0;
}