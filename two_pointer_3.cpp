class Solution {
public:
    int maxArea(vector<int>& a) {
        int max=0;
        int n=a.size();
        int i=0,j=n-1;
        while(i<j)
        {
            int area=(j-i)*std::min(a[i],a[j]);
            if(area>max)
                max=area;
            if(a[i]<a[j])
                i++;
            else
                j--;
        }
        return max;
    }
};