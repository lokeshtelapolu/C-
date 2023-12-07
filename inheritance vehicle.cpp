#include<iostream>
#include<string>
using namespace std;
class vehicle{
  public:
  int year;
  int model;
  vehicle(){
    cin>>year;
    cin>>model;
  }
};
class car:public vehicle{
  public:
  float fuel;
  int seat;
  car(){
    cin>>fuel;
    cin>>seat;
  }
};
class truck:public vehicle{
  public:
  int payload;
  int touning;
  truck(){
    cin>>payload;
    cin>>touning;
  }
};
int main(){
  car c;
  cout<<c.year<<"\n";
  cout<<c.model<<"\n";
  cout<<c.fuel<<"\n";
  cout<<c.seat<<"\n";
  truck t;
  cout<<t.year<<"\n";
  cout<<t.model<<"\n";
  cout<<t.payload<<"\n";
  cout<<t.touning;
  
}
