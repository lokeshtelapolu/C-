#include<iostream>
using namespace std;
double circle(int r)
{
	int area;
	area=3.14*r*r;
	return area;
};
int main()
{
	int r;
	cout<<"enter a value";
	cin>>r;
	cout<<circle(r);
	return 0;
}
