#include<iostream>
using namespace std;
class incre
{
  public:
  int i;
  incre(int x)
  {
    i=x;
  }
  int operator ++()
  {
    return ++i;
  }
};
int main()
{
  incre i(10);
  cout<<++i;
  return 0;
}
