#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    // Straight Pyramid
    for (int i = 0; i <x; i++){
        for (int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Divider
    cout<<"--------------------------------------------------------------------------"<<endl;

    // Inverse Pyramid
    for (int i = x; i>0; i--){
        for (int j = i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
