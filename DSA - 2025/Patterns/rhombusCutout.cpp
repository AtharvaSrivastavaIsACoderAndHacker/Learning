#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    
    for (int i = x; i>0; i--){
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
    for (int i = 2; i<=x; i++){ // i = 2 just to avoid duplicate lines in the middle !
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
