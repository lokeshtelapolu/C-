#include<iostream>
#include<string>
using namespace std;
class A{
  public:
  int x;
};
class B:public A{
  public:
  int y;
};
class C:public B{
  public:
  int z;

void getdata(){
	cout<<"enter a,b,c values \n";
	cin>>x>>y>>z;
    }
   void display(){
	cout<<"a="<<x<<endl;
	cout<<"b="<<y<<endl;
	cout<<"c="<<z<<endl;
    }
};
int main(){
  C c1;
  c1.getdata();
  c1.display();
  return 0;
  
}
