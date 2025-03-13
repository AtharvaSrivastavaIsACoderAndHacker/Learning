#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;

    int width = 2*x-1;
    for (int i = 0; i < width/2+1; i++){
        int xx = x;
        for (int j = 0; j < width; j++) {
            cout<<xx<<" ";
            if(x-xx<i && j<=(width/2-1))xx--;
            else if(j>(width/2-1) && x-xx>=width-(j+1))xx++; 
        }
        cout<<endl;
    }
    for (int i = width/2-1; i >= 0; i--){
        int xx = x;
        for (int j = 0; j < width; j++) {
            cout<<xx<<" ";
            if(x-xx<i && j<=(width/2-1))xx--;
            else if(j>(width/2-1) && x-xx>=width-(j+1))xx++; 
        }
        cout<<endl;
    }


    return 0;
}
