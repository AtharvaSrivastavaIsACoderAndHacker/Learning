#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[]){
    
    // Manipulators are similar to scape sequences !, they modify the Strings !
    // like endl, setw is also a manipulator from the iomanip header file !
    cout<<"endl --> "<<endl;  // both work   
    cout<<"\\n --> \n";       // the same
    cout<<"nextLine";    

    cout<<endl<<"SetW -->"<<setw(25)<<"25";    // endl works the same as \mn, we can put it at the start of the line too just like \n
                                               // setw() ensured that what is coming after it take a width as the integer passed !
    cout<<endl<<"=>"<<setw(20)<<"12345";       // right aligned !
    return 0;
}