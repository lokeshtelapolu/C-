#include<iostream>
#include<string>
using namespace std;
class shape{
  public:
  int height;
  int width;
  shape(){
    cin>>height;
    cin>>width;
  }
};
class tri:public shape{
  public:
  int area()
  {
    return 0.5*height*width;
  }
  int peri()
  {
    return height+width;
  }
};
class Rectangle:public shape{
  public:
    int area(){
        return height * width;}
    
    int peri(){
        return 2*height+width;}
};
int main(){
  tri t;
  cout<<t.height<<"\n";
  cout<<t.width<<"\n";
  cout<<t.area()<<"\n";
  cout<<t.peri()<<"\n";
  Rectangle p;
  cout<<p.height<<"\n";
  cout<<p.width<<"\n";
  cout<<p.area()<<"\n";
  cout<<p.peri()<<"\n";
  return 0;
}
