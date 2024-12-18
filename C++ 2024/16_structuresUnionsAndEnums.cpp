#include<iostream>

using namespace std;

// Struct : user defined datatype, has many values of different types, unlike arrays, which support single datatype !
// struct employee{
//     int id;
//     string name;
// };



// typedef can give alias name to any datatype 
// typedef struct employee{
//     int id;
//     string name;
// } emp;



// Union is similar to structures, but only the largest datatype is total memory and only one datatype can be used at a time !
// union money{
//     int usd; // 4 bytes
//     long long int inr; // 8 bytes
// };
// union employee{
//     int id;
//     char passWordChar;
// };



// Enum


int main(int argc, char const *argv[]){
    
    // struct employee rohandas = {69, "ROHAN DAS"};    // normal zindagi
    // emp rohandas = {69, "ROHAN DAS"};                   // typedef zindagi
    // cout<<rohandas.id<<endl;
    // cout<<rohandas.name<<endl;



    // =================================================================================================



    // union money wallet1;
    // wallet1.inr = 83;
    // cout<<wallet1.inr<<endl; //
    // cout<<wallet1.usd<<endl; // both printed 83, so only one value can be used at a time

    // wallet1.usd = 1;
    // cout<<wallet1.inr<<endl; //
    // cout<<wallet1.usd<<endl;// both printed 1
    
    // union employee rohandas;
    // cout<<rohandas.id<<endl;              // 
    // cout<<rohandas.passWordChar<<endl;    // both show garbage value

    // rohandas.id = 100;
    // cout<<rohandas.id<<endl;              // prints 100
    // cout<<rohandas.passWordChar<<endl;    // garbage value

    // rohandas.passWordChar = 'R';
    // cout<<rohandas.id<<endl;              // garbage value
    // cout<<rohandas.passWordChar<<endl;    // R


    
    // =================================================================================================



    // Enum (enumeration / enumerated type): assigns integers to these identifiers, enumerates the values
    // enum Level{
    //     LOW,
    //     MEDIUM,
    //     HIGH
    // };
    // cout<<LOW<<endl;
    // cout<<MEDIUM<<endl;
    // cout<<HIGH<<endl;
    

    return 0;
}