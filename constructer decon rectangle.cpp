#include<iostream>
#include<string>
using namespace std;

class book
{
  public:
  string title,author;
  int price;
  
  book()
  {
    cin>>title;
    cin>>author;
    cin>>price;
  }
  void printdetails()
  {
    cout<<endl<<title;
    cout<<endl<<author;
    cout<<endl<<price;
  }
  ~book()
  {
    cout<<endl<<"object delected";
  }
};

int main()
{
  book title;
   title.printdetails();
  return 0;
}
