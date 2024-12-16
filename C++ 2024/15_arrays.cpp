#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    // ARRAYS 

    int marks[10];    
    for (int i = 0; i < 10; i++){
        cin>>marks[i];
    }
    
    // for (int i = 0; i < 10; i++){
    //     cout<<marks[i]<<endl;
    // }
    // array's 1st block's address is denoted by the name itself
    



    


    // POINTER ARITHMETIC
    int*ptr = &marks[0]; 
    cout<<*ptr<<" --- "<<ptr<<endl;
    ptr+=2; // +2 == +2 steps forward in the memory, 1 step is 4 bytes for an int in my architecture !
    cout<<*ptr<<" --- "<<ptr<<endl; // now prints marks[2]


    // marks[i] == *(marks+i)
    cout<<marks[7]<<" == "<<*(marks+7)<<endl;

    

    return 0;
}