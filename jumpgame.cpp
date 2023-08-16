class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0; 
        int n = prices.size();
        int m = prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<=m)
            {
                m=prices[i];
            }
            else 
            {
                profit+=prices[i]-m;
                m=prices[i];
            }
        } 
        return profit;

    }
};
