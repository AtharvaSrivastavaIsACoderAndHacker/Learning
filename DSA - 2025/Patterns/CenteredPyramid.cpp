#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    // Straight Pyramid
    int offset = (2*x)/2;
    for (int i = 1; i <2*x+1; i+=2){
        for (int j = 0;j<offset;j++){
            cout<<" ";
        }
        for (int j = 0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        offset--;
    }

    // Divider
    cout<<"--------------------------------------------------------------------------"<<endl;

    // Inverse Pyramid
    offset = 0;
    for (int i = 2*x+1; i >0; i-=2){
        for (int j = 0;j<offset;j++){
            cout<<" ";
        }
        for (int j = 0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        offset++;
    }



    // above was my ghisa pita approach, i still have to learn a lot really !

    return 0;
}
