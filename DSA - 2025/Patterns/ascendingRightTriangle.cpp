#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {

    int x;
    cin>>x;
    
    // Ascending Number Right Triangle with x number of lines
    int num = 1;
    for (int i = 0; i <x; i++){
        for (int j = 0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    // Ascending Alphabet Right Triangle with x number of lines, each starting from 'A'
    char ch = 'A';
    for (int i = 0; i <x; i++){
        char temp = ch;
        for (int j = 0;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }

    // Inverse of the above alphabet pattern !
    ch = 'A';
    for (int i = x; i>0; i--){
        char temp = ch;
        for (int j = 1;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }

    // Ascending alphabet right triangle with same alphabet in each line, with x no of lines !
    ch = 'A';
    for (int i = 0; i <x; i++){
        for (int j = 0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }




    return 0;
}
