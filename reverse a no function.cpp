#include<iostream>
using namespace std;
int reversenumber(int n)
{
	int rem, rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	cout<<"enter value ";
	cin>>n;
	cout<<"reverse no "<<reversenumber(n);
//	cout<<"reversed no"<<" "<<rev;
	return 0;
}
