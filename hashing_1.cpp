#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int>mp;
    int n;
    cin>>n;
    string a;
    cin>>a;
    int amount=0;
    for(int i=0;i<((2*n)-2);i++)
    {
        if(i%2==0)
        {
            mp[a[i]]++;
            //cout<<mp[a[i]]<<" ";
        }
        else{
            mp[a[i]+32]--;
            //cout<<mp[a[i]+32]<<" ";
            if(mp[a[i]+32]<0){
                amount++;
                mp[a[i]+32]++;
            }
        }
    }
    cout<<amount;
}