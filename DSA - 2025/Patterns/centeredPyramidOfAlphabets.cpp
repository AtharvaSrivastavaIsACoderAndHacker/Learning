#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    
    char ch = 'A';
    int width = 2*x-1;
    int offset = (width-1)/2;
    for (int i = 1; i<=2*x; i+=2){
        char temp = ch;
        for (int j = 0;j<offset;j++){
            cout<<" ";
        }
        for (int j = 1;j<=i;j++){
            cout<<temp;
            if(j<=i/2)temp++;
            else temp--;
        }
        cout<<endl;
        offset--;
    }

    return 0;
}
