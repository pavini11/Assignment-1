#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int prefixSum[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>prefixSum[i];
    for(int i=1;i<n;i++)
    {
        prefixSum[i]+=prefixSum[i-1];
    }
    for(int i=0;i<n;i++)
        cout<<"prefixSum[i] = "<<prefixSum[i]<<endl;
}
