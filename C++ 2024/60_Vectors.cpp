#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<auto> & v){
    for(auto i : v){cout<<i<<" ";}
    cout<<endl;
}

int main(int argc, char const *argv[]){
    
    vector<int> v = {1,2,3,4,5};
    cout<<v.size()<<endl; // no  of  elements in the vector
    cout<<v.max_size()<<endl; // max memory available to it
    cout<<v.capacity()<<endl; // no of elements it can hold without needing reallocation(automatic) -->  how many continuous  blocks of memory do we have at the point where this vector lies !
    cout<<v[0]<<" works the same as "<<v.at(0)<<endl;

    v.push_back(10);  // add 10 to end
    printVector(v);
    v.pop_back(); // del from end
    printVector(v);
    
    v.insert(++v.begin(),  100); //  insert 100 at 1st index
    printVector(v);
    v.insert(v.end(), 10 , 69); // 10 times 69 inserted at the end -->  v.insert(position, count, value);
    printVector(v);

    cout<<v.front()<<"  And  "<<v.back()<<endl; //  front gives first and back give the last element of the vector !
    
    printVector(v);
    v.erase(v.begin());
    printVector(v);
    v.clear();
    printVector(v);
    cout<<"See nothing is printed ^^ , clear() emptied the vector !"<<endl;

    vector<int> v1(5,10), v2(10,5); // (no. of elements ___ ,   all values initialized to ___)
    printVector(v1);
    printVector(v2);

    v1.swap(v2); 

    printVector(v1);
    printVector(v2);

    vector<int>::iterator itv1 = v1.begin(); // an iterator for v1
    auto it = v2.begin(); // an iterator for v2  --  using auto storage class
    

    vector<int> vv = {0,2,4,6,8,10};
    vector<int> vvv(vv); //  makes a new vector vvv from vv !

    printVector(vv);
    printVector(vvv);




    vector<double> vd = {1.1, 2.2, 3.3, 4, 5};
    printVector(vd);
    

    return 0;
}
