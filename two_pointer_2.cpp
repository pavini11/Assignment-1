#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,b;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //a.push_back(b);
    }
    sort(a, a + n);
    ll i=0,j=0,team_size=0;
    while(i<n)
    {
        ll max=a[i];
        ll min=a[j];
        ll diff=max-min;
        while(diff>5)
        {
            j++;
            min=a[j];
            diff=max-min;
        }
        team_size=std::max(team_size,i-j+1);
        i++;
    }
    cout<<team_size;
}