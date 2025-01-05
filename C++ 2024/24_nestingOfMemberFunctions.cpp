#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    class Employee{

        void printIQ(){
            cout<<iq<<endl;
        }

        public:
        
        int iq; // no modifier means private by default, ive to add public: to make this work
        void getIQ(){
            cin>>iq;
        }
        void increaseIQ(){
            ++iq;
            printIQ();
        }
        void decreaseIQ(){
            --iq;
            printIQ();
        }
    }harry,johnBanegaDon; // this way too, objs can be declared !




    // Nesting Of Member Functions is when a member function calls another member function  of the same class !
    johnBanegaDon.getIQ(); 
    johnBanegaDon.increaseIQ(); // see i used private function printIQ() indirectly !
    johnBanegaDon.decreaseIQ(); // this is nesting of member function, i hid my tradeSecret printIQ() function whiel keeping it functional !



    
    return 0;
}