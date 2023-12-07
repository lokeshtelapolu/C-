#include<iostream>
#include<string>
using namespace std;

class car
{
  public:
  char company[100];
  int melliage,seater,cost;
  
  car() //constructor
  {
    cin>>company;
    cin>>melliage;
    cin>>seater;
    cin>>cost;
  }
  void detalis()
  {
    cout<<endl<<"company = "<<company;
    cout<<endl<<"melliage ="<<melliage;
    cout<<endl<<"seater="<<seater;
    cout<<endl<<"cost ="<<cost;
  }
  ~car()
  {
    cout<<endl<<"object delected";
  }
};

int main()
{
  cout<<"**************car detalis***************";
  car company;
  company.detalis();
  return 0;
}
