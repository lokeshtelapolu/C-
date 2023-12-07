#include<iostream>
using namespace std;
class cal
{
  public:
  int add(int a,int b)
  {
    return a+b;
  }
  int equal(int a,int b)
  {
    return a=b;
  }
};
int main()
{
  cal c1;
  cout<<c1.add(10,5);
  cout<<"\n"<<c1.equal(10,20);
  return 0;
}
