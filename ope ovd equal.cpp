#include<iostream>
using namespace std;
class Equal
{public:
  int i;
  Equal(){}
  Equal(int x)
  {
    i=x;
  }
  int operator ==(Equal a){
    return i==a.i;
  }
};
int main()
{
  Equal a1(10),a2(20);
  if(a1==a2){
  cout<<"equal";}
  else
  {
    cout<<"not equal";
  }
  return 0;
}
