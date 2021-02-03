#include<bits/stdc++.h>
using namespace std;

#define MAX 1000003
bool prime[MAX+2];

void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<=sqrt(MAX);i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=MAX;j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    sieve();
    vector<int>v(MAX+2,0);
    int count=0;
    for(int i=1;i<MAX;i++)
    {
        if(prime[i])
            count++;
        if(prime[count])
            v[i]=1;
    }
    for(int i=1;i<MAX;i++)
        v[i]+=v[i-1];
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<v[r]-v[l-1]<<endl;
    }
}

