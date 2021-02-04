#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<bool>bag(2001,false);

    for(int i=1;i*i<=2000;i++)
    bag[i*i]=true;

    for(int i=1;i*i*i<=2000;i++)
    bag[i*i*i]=true;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>hash;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            hash[a[i]]++;
        }
        int count=0;

        for(int i=1;i<=1000;i++)
        {
            for(int j=i;j<=1000;j++)
            {
                int sum=i+j;
                if(bag[sum]==false)
                	continue;

                if(i==j)
                	count+=(hash[i]*(hash[i]-1))/2;

                else
                	count+=hash[i]*hash[j];
            }
        }
        cout<<count<<endl;
    }
}