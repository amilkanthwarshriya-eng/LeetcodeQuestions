class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int profit =  0;
        int mini = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            int current = prices[i];
            diff = max(current-mini,0);

            if(current<mini || diff>0)
            {
                mini = current;
            }
            
            profit += diff;

        }
        return profit;
    }
};