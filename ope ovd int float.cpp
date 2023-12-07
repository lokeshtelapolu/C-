#include<iostream>
using namespace std;
class cal{
	public:
		int i(int a,int b)
		{
			return a+b;
		}
		float f(float a,float b)
		{
			return a+b;
		}
};
int main()
{
	cal c;
	cout<<c.i(10,20)<<endl;
	cout<<c.f(5.5,10.5);
}
