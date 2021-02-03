#include<bits/stdc++.h>
using namespace std;

#define MAX 10002
vector<bool>prime(MAX,true);

void sieve()
{
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
    int l,r;
    cin>>l>>r;
    for(;l<=r;l++)
    {
        if(prime[l])
            cout<<l<<" ";
    }
}
