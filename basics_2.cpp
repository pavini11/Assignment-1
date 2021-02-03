#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        vector<int>sub_array;
        for(int j=i;j<n;j++)
        {
            sub_array.push_back(a[j]);
            for(auto k: sub_array)
                cout<<k<<" ";
            cout<<endl;
        }
    }
}
