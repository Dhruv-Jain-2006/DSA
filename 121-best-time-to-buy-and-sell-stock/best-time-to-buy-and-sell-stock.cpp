class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], maxP = 0;

        for (int i=1; i < prices.size(); i++) {
            if (prices[i] > buy) {
                maxP = max(maxP, prices[i] - buy);
            }
            buy = min(prices[i], buy);
        }
        return maxP;
    }
};