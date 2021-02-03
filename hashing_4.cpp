
int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int>m;
    int sum=0,Max=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(A[i]==0)
            Max=max(Max,1);
        if(sum==0)
            Max=i+1;
        if(m.count(sum))
            Max=max(Max,i-m[sum]);
        else
            m[sum]=i;    
    }
    return Max;
}