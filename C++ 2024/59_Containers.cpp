#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // Containers are templates that are used to store data !
    // They are of three types :-
    //                  * Sequence Containers - Array, Vector, List, Queue(FIFO), Stack(LIFO) etc - Linearly stored data
    //                  * Associative Containers - Sets, Maps and Dictionaries - Direct Access
    //                  * Derived Containers - stack, Queue, priority queue - Can be derived from other containers, as per use !
    //                  * Unordered Containers
    

    // Vector
    // Randon Access(RA) = Fast
    // Insertion/Deletion (I/D) = Slow ----> I/D at end = Fast
    vector<int> array = {1,2,3,4,5,6,7,8,9,0};
    cout<<array.at(1)<<" hello"<<array[1]<<endl;


    
    // List (Doubly Linked List Implementation)
    // RA = Slow
    // I/D middle = Fast
    list<int> listt = {5,4,3,2,1};
    auto iteree = listt.begin(); // Interator
    cout<<*iteree<<endl;
    advance(iteree,2);
    cout<<*iteree<<endl;

    // etc.


    return 0;
}
