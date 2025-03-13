#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    
    int num;
    for (int i = 0; i<x; i++){
        num = (i%2==0)?1:0;
        for (int j = 0;j<=i;j++){
            cout<<num<<" ";
            num = !num;
        }
        cout<<endl;
    }

    return 0;
}
