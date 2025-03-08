#include<iostream>
#include<map>
#include<string>
using namespace std;

void printMap(auto& mmm){
  cout<<"---------------------"<<endl;
    auto it = mmm.begin();
    while(it!=mmm.end()){
          cout<<(*it).first<<" AND "<<it->second<<endl;
          it++;
    }

}

int main(int argc, char const *argv[]){
    
    map<int,string> mmm {{1,"A"},{2,"B"},{3,"C"},{4,"D"}};
    mmm[5] = "E";

    cout<<mmm.at(1)<<" and "<<mmm[1]<<endl;

    cout<<mmm.at(0)<<" and "<<mmm[0]<<endl; // nothing printed coz key int - 0 does't exist in the list --> at() creates a key with default value if thee given key isn't present
    
    map<int,string>::iterator it = mmm.begin();
    while(it!=mmm.end()){
        cout<<(*it).first<<" AND "<<it->second<<endl;
        it++;
    }
    
    // Deleting By Index
    mmm.erase(2);
    // Deleting By Iterator
    mmm.erase(mmm.begin());


    printMap(mmm);

    //Insertion
    mmm.insert({{11,"Ishi Pal"},{12,"Ansh Yadav"},{101,"Naruto Uzumaki"},{102,"Sasuke Uchiha"},{103,"Satoru Gojo"}});

    printMap(mmm);
    

    return 0;
}
