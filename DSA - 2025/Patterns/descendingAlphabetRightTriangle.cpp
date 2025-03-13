#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    
    char ch = 'E';
    for (int i = 0; i <x; i++){
        char temp = ch-i;
        for (int j = 0;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }

    return 0;
}
