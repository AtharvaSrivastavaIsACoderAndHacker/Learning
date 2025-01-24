#include<iostream>
using namespace std;

template<class d1 = int, class d2 = int> // default parameters !
class actual_STL_type_pair{
    d1 data1;
    d2 data2;
    public:
        actual_STL_type_pair(d1 d, d2 dd){
            data1 = d;
            data2 = dd;            
        }
        d1 first(){return data1;}
        d2 second(){return data2;}
};

int main(){

    actual_STL_type_pair<> intintPair(1, 2); // see if i don't give datatypes, default int, int is taken !
    actual_STL_type_pair<float, char> floatCharPair(1.1f, 'S');

    cout<<intintPair.first()<<" | "<<intintPair.second()<<endl;
    cout<<floatCharPair.first()<<" | "<<floatCharPair.second()<<endl;

    return 0;
}
