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
    

    
    return 0;
}