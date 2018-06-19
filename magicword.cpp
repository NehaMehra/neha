#include<iostream>
using namespace std;
int main()
{
	int prime[]={67,71,73,79,83,89,97,101,103,107,109,113};
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int j;
		for(int i=0;i<s.length();i++)
		{
			j=0;
			while(int(s[i])>=prime[j]) j++;
			if(int(s[i])<=67)
			cout<<(char)67;
			else if(int(s[i])>=113)
	        cout<<(char)113;
	        else
	        {
	        	int a=int(s[i])-prime[j-1];
	        	int b=prime[j]-int(s[i]);
	        	if(a<=b)
	        	{
	        		cout<<(char)prime[j-1];
				}
				else
				{
					cout<<(char)prime[j];
				}
			}
		}
		cout<<"\n";
		
	}
}
