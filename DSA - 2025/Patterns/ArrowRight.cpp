#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    for (int i = 0; i <x; i++){
        for (int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = x-1; i>0; i--){
        for (int j = i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
