#include<iostream>
using namespace std;
int binary(int a[],int f,int l,int found)
{
	if(f<=l)
	{
		int mid=f+(l-f)/2;
		if(a[mid]==found)
		return mid;
		if(a[mid]>found)
		{
			return binary(a,f,mid-1,found);
		}
		if(a[mid]<found)
		{
			return binary(a,mid+1,l,found);
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int found;
	cin>>found;
	int k=binary(a,0,n-1,found);
	if(k==-1)
	cout<<"not found";
	else
	cout<<"found";
}
