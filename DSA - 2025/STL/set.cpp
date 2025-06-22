#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(int argc, char const *argv[]){
    
    // Sets = sorted and unique values !
    // Tree based structure

    set<int> s; // UNIQUE AND ORDERED
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    auto it = s.find(1); // is the provided value is absent, the iterator will point to end() iterator !
    cout<<*it<<endl;

    s.erase(it);

    // s.lower_bound() and s.upper_bound() are also there



    // ==================================================================================================================================


    multiset<int> ms = {1,2,3,4,5,5,6,6}; // ORDERED
    // Multisets are ordered but unlike sets, can store duplicate elements --> it you delete an element, all occurrences of it are erased !

    ms.erase(6);
    cout<<*ms.end()<<endl; // both 6s were smoked !
    
    ms.erase(ms.find(5)); // only erases one 5 !
    cout<<*ms.end()<<endl; // only one 5 was burnt to a fine crisp , it was skewered by falling stalagmite, which Ansh enjoys !


    // ==================================================================================================================================

    unordered_set<int> us; // UNIQUE

    // lower_bound() and upper_bound() functions aren't there !
    // randomized order !


    return 0;
}