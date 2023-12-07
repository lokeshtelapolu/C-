#include<iostream>
using namespace std;
class overload
{
	int a[4];
	public:
		overload(int s,int d,int f,int g)
		{
			a[0]=s;
			a[1]=d;
			a[2]=f;
			a[3]=g;
		}
		int operator[](int i)
		{
			return a[i];
		}
};
int main()
{
	overload ob(1,9,3,4);
	cout<<ob[1]<<endl;
	cout<<ob[3];
	return 0;
}
