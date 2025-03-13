#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    for (int i = 1; i<x+1; i++){
        for (int j = 1; j < i+1; j++) {
            cout<<j;
        }
        for (int j = 1; j < 2*x-2*i+1; j++) { // or just 2*(x-i)
            cout<<" ";
        }
        for (int j = i; j > 0; j--) {
            cout<<j;
        }
        cout<<endl;
    } 

    return 0;
}
