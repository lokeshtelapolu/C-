#include<iostream>
using namespace std;
class Sub
{
  public:
  int i;
  Sub(int x)
  {
    i=x;
  }
  int operator -(Sub a)
  {
    return i-a.i;
  }
};
int main()
{
  Sub a1(20),a2(30);
  cout<<a1-a2;
return 0;
}
