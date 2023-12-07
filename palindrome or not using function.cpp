#include <bits/stdc++.h>
using namespace std;
string palindrone(string s)
{
	string p=s;
	reverse(p.begin(), p.end());
	if(s==p)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
int main()
{
	string s= "ABCBA";
	cout<<palindrone(s);
	return 0;
}
