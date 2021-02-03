#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int suffixSum[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>suffixSum[i];
    for(int i=n-2;i>=0;i--)
    {
        suffixSum[i]+=suffixSum[i+1];
    }
    for(int i=0;i<n;i++)
        cout<<"suffixSum[i] = "<<suffixSum[i]<<endl;
}
