#include<iostream>
#include<list>

using namespace std;

template<typename datatype>
void printList(list<datatype> li){
    auto last = --li.end();  // Cache last iterator to avoid repeatedly recalculating it ( O(n) saved each time ) !
    for (auto i = li.begin(); i != li.end(); i++){
        cout<<*i<<" ";
        if(i==last)cout<<endl; // Bidirectional iterators only support ++ and --, not +1 or -1 or any other arithmetic !
    }
}

int main(int argc, char const *argv[]){
    
    // This is a doubly linked list.  
    // Traversal up and down the list requires linear time, but adding and removing elements is done in constant time, regardless of where the change takes place.  
    // Unlike std::vector and std::deque, random-access iterators are not provided, so subscripting ( [] ) access is not allowed.  For algorithms which only need sequential access, this lack makes no difference.
    // Also unlike the other standard containers, std::list provides specialized algorithms %unique to linked lists, such as splicing, sorting, and in-place reversal.
    // A %list conceptually represented as : A <---> B <---> C <---> D
    // Iterator's next/previous pointers refer to itself, if the list is empty. 
    // List is an implementation of a doubly linked list --> so insert/delete operations are very efficient but Random Access is difficult as list-STL doesn't maintain indices !
    // cout<<li[0]<<endl; // error - coz lists cannot be randomly accessed !
    // Random-access iterators (like those in std::vector) support comparison with < and >, meaning you can write i < li.end().
    // Bidirectional iterators like the ones for std::list, on the other hand, only support != (or ==) for comparisons.
    // Biderectional iterators only support ++ and -- !


    list<int> li = {1,2,3,4,5};
    printList(li);
    
    li.push_back(6);
    li.emplace_back(7);
    li.push_front(0); // emplace front also !
    printList(li);

    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    
    return 0;
}