#include<iostream>
#include<string>
using namespace std;
class emp{
  public:
  int id;
  string name;
  int sal;
  emp(){
    cin>>id;
    cin>>name;
    cin>>sal;
  }
};
class manag:public emp{
  public:
  float bonus;
  string dept;
  manag(){
    cin>>bonus;
    cin>>dept;
  }
};
class engineer:public emp{
  public:
  string special;
  int hours;
  engineer(){
    cin>>special;
    cin>>hours;
  }
};
int main(){
  manag tr;
  cout<<tr.id<<"\n";
  cout<<tr.name<<"\n";
  cout<<tr.sal<<"\n";
  cout<<tr.bonus<<"\n";
  cout<<tr.dept<<"\n";
  engineer ui;
  cout<<ui.id<<"\n";
  cout<<ui.name<<"\n";
  cout<<ui.sal<<"\n";
  cout<<ui.special<<"\n";
  cout<<ui.hours;
}
