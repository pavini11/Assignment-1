#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m,d;
    cin>>m>>d;
    int s[n];
    memset(s,0,sizeof(s));
    while(m--)
    {
        int start,end;
        cin>>start>>end;
        s[start]+=d;
        if(end+1<n)
            s[end+1]-=d;
    }
    
    for(int i=1;i<n;i++)
        {
            s[i]+=s[i-1];
            a[i]+=s[i];
        }
    a[0]+=s[0];
    //cout<<a[0]<<" ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}