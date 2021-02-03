class Solution{
    public:
    int lenOfLongSubarr(int a[],  int N, int k) 
    { 
        // Complete the function
        unordered_map <int,int>m;
        int sum=0,maxlen=0;
        for(int i=0;i<N;i++)
        {
            sum+=a[i];
            if(sum==k)
                maxlen=i+1;
            if(m.count(sum-k))
                maxlen=max(maxlen,i-m[sum-k]);
            if(!m.count(sum))
                m[sum]=i;
        }
        return maxlen;
    } 

};