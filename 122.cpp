class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int min=prices[0], max=prices[0], total_profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if (prices[i]<prices[i-1])
            {
                total_profit+=max-min;min=prices[i];max=min;
            }
            else if (prices[i]>prices[i-1])
            {
                max=prices[i];
            }     
        }
        total_profit += max-min;
        return total_profit;     
    }
};