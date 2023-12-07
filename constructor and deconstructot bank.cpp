#include<iostream>
#include<string>
using namespace std;
 class bank
 {
   public:
   string name;
   int accountnumber,balance;
   
   bank()
   {
     cin>>name;
     cin>>accountnumber;
     cin>>balance;
   }
   void printdetails()
   {
    cout<<"\n"<<"name="<<name;
     cout<<"\n"<<"accountnumber="<<accountnumber;
     cout<<"\n"<<"balance="<<balance;
   }
   ~bank()
   {
     cout<<"\nobject delected";
   }
 };
int main()
{
  cout<<"*************bank details**************";
  bank jeevan,poshak;
  jeevan.printdetails();
  poshak.printdetails();
 
  return 0;
}
