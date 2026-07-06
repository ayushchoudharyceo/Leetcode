class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_stock = prices[0];
        int i=1;
        while(i < prices.size()) 
        {
            int current_profit = prices[i] - min_stock;
            max_profit = max(max_profit, current_profit);
            min_stock = min(min_stock, prices[i]);
            i++;
        }
        return max_profit;  
    }
};