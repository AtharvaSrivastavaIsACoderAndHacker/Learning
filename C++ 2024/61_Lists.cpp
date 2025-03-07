#include<iostream>
#include<list>

using namespace std;

template<class x>
void printList(list<x> &lst){
    for (auto it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(int argc, char const *argv[]){
    
    // Lists are STL implementations of Doubly Linked Lists !
    // No Random Access, it does'nt support indices !
    // methods --> front, back, begin(iterator), end(iterator), rbegin, rend, empty, size, max_size 
    list<int> li = {1,2,3,3,4,5};
    printList(li);
    li.push_back(6);

    printList(li);

    // push_front 
    // pop_front 
    // push_back 
    // pop_back 
    // insert --> takes 2 args, the position and the value to be inserted
    // erase --> takes 1 arg, the itr to the position of the element that has to be erased !
    // swap --> swaps the elements of 2 lists
    // clear --> removes all the elements from the list
    // remove --> removes all the elements with the value passed as arg
    // remove_if --> removes all the elements that satisfy the condition passed as arg
    // unique --> removes all the duplicate elements
    // sort --> sorts the list
    // reverse --> reverses the list
    // merge --> merges 2 lists
    // splice --> merges 2 lists at a particular position
    // emplace --> inserts the element at the position passed as arg    
    // emplace_front --> inserts the element at the front
    // emplace_back --> inserts the element at the back
    // resize --> resizes the list
    // assign --> assigns the values to the list
    // front --> returns the first element
    // back --> returns the last element
    // begin --> returns the iterator to the first element
    // end --> returns the iterator to the last element
    // rbegin --> returns the reverse iterator to the first element
    // rend --> returns the reverse iterator to the last element
    // empty --> returns true if the list is empty
    // size --> returns the size of the list
    // max_size --> returns the max size of the list
    

    li.remove(3);
    printList(li);

    
    

    return 0;
}
