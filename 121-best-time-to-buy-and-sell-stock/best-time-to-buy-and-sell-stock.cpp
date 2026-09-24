class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            int current = prices[i];

            profit = max(current-mini,profit);

            if(current<mini)
            {
                mini = current;
            }
        }
        return profit;
    }
};