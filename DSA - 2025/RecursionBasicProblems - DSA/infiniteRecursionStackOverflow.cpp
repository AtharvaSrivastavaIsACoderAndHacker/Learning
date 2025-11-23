#include<iostream>

using namespace std;
  
static int x = 0;
 
void printt(){
    cout<<x<<endl;
    x++;
    printt();
}

int main(int argc, char const *argv[]){
    
    
    printt();
    
    
    return 0;
}