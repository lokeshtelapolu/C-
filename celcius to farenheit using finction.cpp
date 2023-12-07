#include<iostream>
using namespace std;
double celciustofarenheit(double cel)
{
	return (cel*9/5)+32;
}
int main()
{
	int cel;
 //	float faren;
	cout<<"enter cel ";
	cin>>cel;
	cout<<celciustofarenheit(cel);
//	cout<<faren;
	return 0;
}
