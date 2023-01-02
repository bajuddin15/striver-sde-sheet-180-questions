class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue = prices[0];
        int profit = 0;
        for(auto &it : prices){
            minValue = min(minValue, it);
            if(it - minValue > profit){
                profit = it - minValue;
            }
        }
        return profit;
        
    }
};