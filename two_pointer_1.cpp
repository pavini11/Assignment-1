#include<bits/stdc++.h>
using namespace std;
#define MAX 1002

int main()
{
	string a;
	getline(cin,a);
	int n=a.size();
	map<char,int> mp;
	int max=0;
	char p;
	for(int i=0;i<n;i++)
	{
		mp[a[i]]++;
		if(mp[a[i]]>max)
		{
			max=mp[a[i]];
			p=a[i];
		}
		else if(mp[a[i]]==max && p>a[i])
			p=a[i];
	}
	cout<<p<<" "<<max;
}