#include <iostream>
using namespace std;
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
  public:
  void area(int r)
  {
   y=r;
   int area=y+y;
   cout<<area<<endl;
   cout<<x;
   }
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  //myObj.y = 50;  // Not allowed (y is private)
  myObj.area(8);
  return 0;
}

