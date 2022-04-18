class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mi=prices[0];
        int profit=0;
        for(int i=1;i<n;++i)
        {
            if(mi>prices[i])
            {
                mi=prices[i];
            }
            else
            {
                profit=max(prices[i]-mi,profit);
            }
        }
        return profit;
    }
};