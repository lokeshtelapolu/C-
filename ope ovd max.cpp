#include<iostream>
using namespace std;
class Max
{
  public:
  int i;
  
  Max(){}
  Max(int x)
  {
    i=x;
    
  }
  int operator > (Max a)
  {
    return i>a.i;
  }
  
};
int main()
{
  Max a1(10),a2(20);
  if(a1>a2)
  {
    cout<<"a is bigger";
  }else{
    cout<<"a2 is bigger";
  }
  return 0;
}
