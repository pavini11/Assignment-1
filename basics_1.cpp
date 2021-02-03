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
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    cout<<"The sum is: "<<sum;
    return 0;
}
