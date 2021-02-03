#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
		a[i]+=a[i-1];
	cin>>q;
	while(q--)
	{
		int i,j;
		cin>>i>>j;
		if(i==0)
			cout<<a[j]<<endl;
		else
			cout<<a[j]-a[i-1]<<endl;
	}
	return 0;
}