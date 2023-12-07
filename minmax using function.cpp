 #include<iostream>
using namespace std;
void minmax(int arr[],int n)
{
	int max=arr[0],min=arr[0]; 
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
		if (min>arr[i])
		min=arr[i];
	}
	cout<<max<<"\n";
	cout<<min<<"\n";
}
int main()
{
	int arr[]={1,2,3,6,5,4,9,8};
	int n=8;
	minmax(arr,n);
	return 0;
}
