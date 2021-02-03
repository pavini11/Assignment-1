class Solution {
public:
    int numSubarraysWithSum(vector<int>& a, int k) {
        unordered_map<int,int>m;
        m[0]++;
        int len=0,sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            len+=m[sum-k];
            m[sum]++;
        }
        return len;
    }
};