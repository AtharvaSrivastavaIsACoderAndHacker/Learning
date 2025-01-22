#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[]){
    
    // OPENING
    fstream file;  // both read / write !
    file.open("hello.txt", ios::in | ios::out); // opening using open() function !
    
    // WRITING            
    file<<"Atharva Ishi Ansh Adhyan !";

    // READING
    string str, individual, individual2;
    file.seekg(0, ios::beg); // after writing, the ptr's at the end of the file, move it to the start then read the file !
    getline(file, str); //  gets the whole line
    file.seekg(0, ios::beg); // again we need ot move the ptr back !
    file>>individual>>individual2; // gets 2 space separated words  because 2 strings are given to get values into !
    cout<<str<<endl;
    cout<<individual<<individual2<<endl;
    // see if i don't reset the ptr, it continues with Ansh and Adhyan !
    file>>str>>individual;
    cout<<str<<individual<<endl;

    // CLOSING
    file.close();





    // eof() returns a bool stating whether it's the end of file of not !
    // file.eof() , if it returns 1 or true, it means that the ptr is at the last character !
    ifstream filee("hello.txt");
    char ch;
    while (!(filee.eof())) { //    while(file.eof() != 0){}  --> works fine as well !
        ch = filee.get();
        cout<<ch<<endl;
    }
    filee.close();



    return 0;
}
