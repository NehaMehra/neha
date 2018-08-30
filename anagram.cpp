#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,count1[26]={0},count2[26]={0},result=0;
	string s1,s2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s1>>s2;
		int l1=s1.length();
		int l2=s2.length();
		for(int j=0;j<l1;j++)
		{
			count1[s1[j]-'a']++;
		}
		for(int j=0;j<l2;j++)
		{
			count2[s2[j]-'a']++;
		}
		for(int j=0;j<26;j++)
		{
			result=result+fabs(count1[j]-count2[j]);
		}
		cout<<result;
	}
}
