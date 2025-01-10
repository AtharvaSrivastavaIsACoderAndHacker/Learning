#include<iostream>
#include<cmath>
using namespace std;

class investment{
  double principal, rate, time;  
  double amount;
  bool rateInPercentage = false;
  public:
        investment(double p, double r, double t){ // for rate in decimal format !
          principal = p;
          rate = r;
          time = t;
          amount = principal * (pow(1+r, time));
        }
        investment(double p, double r, double t, bool percent){ // for rate in percentage format !
          principal = p;
          rate = r;
          time = t;
          amount = principal *  (   pow(1+(float(r)/100),    time)       );
        }
        showInvestmentDetails(){
           cout << "Principal: " << principal << endl;
           cout << "Rate: " << rate << (rateInPercentage ? " (in %)" : " (in decimal)") << endl; // ternary operator 
           cout << "Time: " << time << " years" << endl;
           cout << "Amount: " << amount << endl; 
        }

};

int main(int argc, char const *argv[]){
    
  double principal, rate, time;
  bool percentage;
  cin>>principal>>rate>>time>>percentage;
 
  investment* inv;
  if(percentage){
    inv = new investment(principal, rate, time, percentage); // dynamic mem management, new assigns memory and returns address to the mem location !
  }
  else{
    inv = new investment(principal, rate, time);
  }
  
  //inv->showInvestmentDetails(); // both this (when this -> operator is used, u dont need to dereference the pointer to access obj's members)
  (*inv).showInvestmentDetails(); // and this works ! (this is explicitly telling that (value at inv).func();)

  return 0;
}
