class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_stock = prices[0];
        for(int i = 1; i < prices.size(); i++) 
        {
            int current_profit = prices[i] - min_stock;
            max_profit = max(max_profit, current_profit);
            min_stock = min(min_stock, prices[i]);
        }
        return max_profit;  
    }
};