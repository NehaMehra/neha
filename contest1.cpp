#include<bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	long long int min1=INT_MAX;
	long long int min2=INT_MAX;
		long long int min3=INT_MAX;
	cin>>n;
	long long int a[n];
	long long int id[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>id[i];
	}
	for(int i=0;i<n;i++)
	{
		if(id[i]==1 && min1>a[i])
		{
			min1=a[i];
		}
		if(id[i]==2 && min2>a[i])
		{
			min2=a[i];
		}
		if(id[i]==3 && min3>a[i])
		{
			min3=a[i];
		}
	}
	if(min1!=INT_MAX && min2==INT_MAX && min3==INT_MAX)
	{
		cout<<min1;
	}
	else if(min1==INT_MAX && min2!=INT_MAX && min3==INT_MAX)
	{
		cout<<min2;
	}
	else if(min1==INT_MAX && min2==INT_MAX && min3!=INT_MAX)
	{
		cout<<min3;
	}
	else if(min1!=INT_MAX && min2!=INT_MAX && min3==INT_MAX)
	{
		cout<<min1+min2;
	}
	else if(min1!=INT_MAX && min2==INT_MAX && min3!=INT_MAX)
	{
		cout<<min3;
	}
	else if(min1==INT_MAX && min2!=INT_MAX && min3!=INT_MAX)
	{
		cout<<min3;
	}
	
	else if(min1!=INT_MAX && min2!=INT_MAX && min3!=INT_MAX)
	{
		int n=min1+min2;
		if(n>min3)
		{
			cout<<min3;
		}
		else 
		cout<<n;
	}
 
 
} 
