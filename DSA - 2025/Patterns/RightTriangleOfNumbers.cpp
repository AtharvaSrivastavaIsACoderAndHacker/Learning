#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    // Straight
    for (int i = 1; i <=x; i++){
        for (int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for (int i = 1; i <=x; i++){
        for (int j = 1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    
    // Divider
    cout<<"----------------------------------------------------------------------"<<endl;

    // Inverse
    for (int i = x; i >0; i--){
        for (int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for (int i = x; i>0; i--){
        for (int j = 1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }


    return 0;
}
