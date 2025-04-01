#include<iostream>
#include<map>

using namespace std;

int main(int argc, char const *argv[]){
    
    // Map is a keyValue pair datatype, where keys are always unique while duplicate values are allowed !
    // Map stores key (and it's values) in a sorted order, sorted on the basis of the unique keys !

    map<int, int> m;

    m[69] = 699; // key 69 holds value 699 --> {69, 699}
    m.insert({123,123123123}); // emplace is also there !
    
    for(auto it : m){
        cout<<it.first<<" and "<<it.second<<endl;
    }
    
    auto it = m.find(123); // points to 123 key
    --it; // now points to 69 key, coz in ascending order, 69 is before 123 !
    cout<<it->first<<" and "<<(*it).second<<endl;
    
    
    
    cout<<"==========================================================================================================================="<<endl;
    
    
    // Multiset
    
    
    multimap<int, int> mm; // DUPLICATE KEYS !, but sorted
    // same keys are kept sorted together and values with those saem keys are ordered on the basis of latest added !
    // for eg, both keys-value pairs of the key 69 will appear but value 9 pair will appear first because it was first added, keys are sorted and even the order of same-key pairs is ordered !
    mm.insert({123,123123123});
    mm.insert({123,1});
    mm.insert({123,12});
    mm.insert({69,9});
    mm.insert({69,6}); 
    for(auto it : mm){
        cout<<it.first<<" and "<<it.second<<endl;
    }


    cout<<"==========================================================================================================================="<<endl;

    
    // unordered map has UNIQUE and UNORDERED keys !
    // unordered map has O(1) while map has O(N) time complexity !

    return 0;
}