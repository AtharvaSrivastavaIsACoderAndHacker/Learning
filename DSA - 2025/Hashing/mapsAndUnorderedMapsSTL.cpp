#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    // Unordered Maps in STL
    // An in array in stack, ie. inside a function can at max. be 10^6 size sue to
    // ~4 to 8 MB stack limit If you declare it globally you can go till ~10^7 int
    // array

    // Stack boolean array limit, 10^7
    // Global boolean arrya limit 10^8
  
    // That's why you use dynamic mem allocation, like malloc, calloc (for
    // contiguous mem), or in this case a C++ Standard template called a Hashmp,
    // let's see an Unordered Map

    // You use STL unordered_map and maps instead of flat, manually
    // managed "DMA heap hash arrays" because modern software engineering
    // prioritizes memory safety, performance, and dynamic resizing over
    // trying to bypass standard stack limits.

    // In unordered maps, it uses a hashing function to take the value and run it
    // through a function to get the memory address where to store it's data ie
    // frequency. so if you have values rangin from 1 to 100, but array is
    // {0,1,2,100}, u waste 97 spaces which just have to contain 0s to maintain
    // continuity, but unordered map calculates the locations for each unique
    // elements and stores freq there after calculations ! so when looking up a
    // key, u get value in O(1) time

    // Hashing is a universal math concept which accepts exactly 1 input and ties
    // it to exactly 1 output ! No 2 inputs has the name output and No to outputs
    // share the same inputs Actually hashing has mathematical limits ans afterr
    // certain limits, hashi collisions are seen --> A Hash collision refers to
    // when 2 entirely diff inputs give the same output So modern algorithms like
    // SHA256 have 2^256 total outputs. so collisions are , though random, rare in
    // probabality !

    /*
        The total theoretical outputs for SHA-256 are \(2^{256}\) (approx. \(1.15
        \times 10^{77}\)). However, due to the mathematical limits governed by the
        Birthday Problem, you are not guaranteed to wait for \(2^{256}\)
        combinations. Because hash outputs behave randomly, a collision becomes a
        50% probability after hashing only \(\approx 2^{128}\) (approx. \(3.4
        \times 10^{38}\)) unique inputs.
    */

    // Hashmaps, cryptpgraphic hashing and other uses are specific derivations of
    // this fundamental

    // So Hashing it much more that just a Data Structure

    /*
        a hashmap/ hashing conept is universal, but u can use it for specialized
        applications like sort and freq calculation right ? and even standard arrays
        can be made into frequency hashtable right ? as keys are just indices


        The hashing concept is universal, and you are exactly right about both
        points. Using arrays as direct-address tables is actually the foundational
        bedrock of hash maps, and specialized frequency or sorting applications are
        incredibly common.




        are hashmaps also a specific application of hashing maths, which can also
        be derived for cryptographic hashing ?

        Yes, hash maps are a specific application of hashing math, but hash maps
        and cryptographic hashing sit on opposite sides of the mathematical
        spectrum. They share the core concept of mapping an input to a number, but
        they are built for entirely different goals.

      [ INPUT ] ---> [ HASH FUNCTION ] ---> [ FIXED-SIZE OUTPUT ]
                          |
            +-------------+-------------+
            |                           |
    (Hash Maps)                   (Cryptography)
    • Fast index lookup           • One-way security
    • Minimize collisions         • Avalanche effect
    • Reversible (via keys)       • Irreversible

    */

    int arr[20] = {2,   345, 35, 23, 2,   4,   435, 3,  34,  345,
                 324, 23,  4,  2,  435, 345, 23,  34, 900, 90};
    unordered_map<int, int> umap;
    for (int i = 0; i < 20; i++) {
        umap[arr[i]]++;
    }

    /*
        while (1){
        int n;
        cout<<"Enter a no. and the program will return you it's frequency in the hardcoded array above ! : "; 
        cin>>n; cout<<umap[n]<<endl; // prints frequency of input n scc to the 20 element int array above !
                                     
        }
    */

    // ==================================================

    // Using Unordered_Maps like dictionaries in python

    unordered_map<int, string> um2 = {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
    for (auto i : um2)
    cout << i.first << " " << i.second << endl;

    // Diff common operations on Unordered Map
    um2[1] = "Geeks";
    um2.insert({2, "For"});
    cout << um2[2] << endl;
    cout << um2.at(1);
    for (auto it = um2.begin(); it != um2.end(); it++)
    cout << it->first << ": " << it->second << endl;
    um2.erase(2);

    https: // www.geeksforgeeks.org/cpp/map-vs-unordered_map-c/

    // Maps and Unordered Maps are vastly diff in implementations and use cases,
    // but their syntax and methods are almost similar so no need to re write !
    

    // Maps
    // they are ordered and use smth like a Red-Balck Tree to store key-value pairs
    // fetch/store in a map takes O(log N) time complexity

    // Unordered maps
    // They use Hash Tables to store key value pairs in a non sorted random order
    // fetch/store time complexity --> Big Omega(N) , avg case complexity is 1, near constant, but if the dataset is specific and has billions of collisions . which is rare, a map would be faster
    // so generally and usually a umap is faster than a map

    

    return 0;
} 
