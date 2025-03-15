#include<iostream>
#include<vector>

using namespace std;

template<typename datatype>
void printVector(vector<datatype> vec){
    for (int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
        if(i==vec.size()-1)cout<<endl;
    }
}

int main(int argc, char const *argv[]){
    
    vector<int> vec = {1,2,3,4,5,6};

    cout<<vec.at(1)<<endl;
    cout<<vec[1]<<endl;
    
    vec.push_back(1);
    vec.emplace_back(2);
    
    printVector(vec);
    
    
    vector<int> randomVector(5,10); // size 5, all values initialized to 10 --> simply 5 times 10
    randomVector.push_back(69);

    printVector(randomVector);

    vector<int>::iterator i = vec.begin();
    auto it = vec.begin();

    cout<<*it<<endl;
    advance(it,2);
    cout<<*it<<endl;    
    advance(it,-2);
    cout<<*it<<endl;

    // it++, it+=2 and it = it-1 also works --> better than using advance() function for extra bit of typing !

    it = randomVector.end()-1; // changed from vec to randomVector ! --> -1 bcoz .end() points to the memory location right after the last element !
    cout<<*it<<endl;

    cout<<vec.front()<<" and "<<vec.back()<<endl;


    printVector(vec);
    vec.erase(vec.end()-2);
    printVector(vec);
    vec.erase(vec.begin(), vec.begin()+2); // from , to
    printVector(vec);
    vec.erase(vec.begin());
    printVector(vec);
    
    vec.pop_back();
    printVector(vec);

    vec.insert(vec.begin(), 5, 69); // (position,   x:no. of items to be inserted,    what to be inserted x times)
    printVector(vec);


    // enough atyachaar on vec and randomVector, lets create new ones !

    vector<int> v = {1,2,3};
    vector<char> vv = {'1','2','3'};
    vector<int> vvv = {4,5,6};

    // swap() swaps values of two vectors
    v.swap(vvv);

    printVector(v);
    printVector(vvv);

    // v.swap(vv); // illegal bcoz the 2 vectors are of different datatypes !

    v.clear();
    cout<<"Is v empty ? --> "<<v.empty()<<endl; // boolean
    v.insert(v.begin(), 10, 69);
    cout<<"Is v empty ? --> "<<v.empty()<<endl; // boolean

    printVector(v);

    // Have a good day !

    return 0;
}