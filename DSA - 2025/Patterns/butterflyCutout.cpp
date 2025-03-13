#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    

    for (int i = 1; i<=x; i++){
        for (int j = 1; j < i+1; j++) {
            cout<<"*";
        }
        for (int j = 1; j < 2*x-2*i+1; j++) { // or just 2*(x-i)
            cout<<" ";
        }
        for (int j = 1; j < i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = x-1; i>0; i--){
        for (int j = 1; j < i+1; j++) {
            cout<<"*";
        }
        for (int j = 1; j < 2*x-2*i+1; j++) { // or just 2*(x-i)
            cout<<" ";
        }
        for (int j = 1; j < i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
