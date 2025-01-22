#include<iostream>
#include<fstream>
using namespace std; // beware that we are imposing the use of std namespace !
// https://www.geeksforgeeks.org/how-to-get-current-directory-in-cpp/

int main(int argc, char const *argv[]){
    
    // Cpp has modern methods for fileIO with header fstream !
    // Even is Cpp has fstream, old C-style fileIo with stdio.h is also supported in CPP !
    // fstream = read/write both --> it's the base class and i/ofstream  classes are derived from it !
    // ifstream = reading a file 
    // ofstream = writing to file
    // istream and ostream are for console io, for fileIO, we have ifstream and ofstream !
    
    // ways to open a file:-
    //      * using the constructor of the _fstream class (_ to be filled)
    //      * using the member function open() from the file Object created !
    


    // WRITING  
    ofstream fileObj("hello.txt", ios::in | ios::out | ios::trunc); // trunc clears it !
    fileObj<<"Hello, World!";
    fileObj<<"Let's Code !";
    fileObj.close();



    // READING
    ifstream fileIn("hello.txt");
    string content;
    getline(fileIn, content);
    cout<<content;
    fileIn.close();


    return 0;
}
