class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int prev = 1,suffix=1;
        int ans=INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(prev==0)prev=1;
            if(suffix==0)suffix=1;
            prev=prev*arr[i];
            suffix=suffix*arr[n-1-i];
            ans = max(ans,max(prev,suffix));
        }
        return ans;
        
    }
};
