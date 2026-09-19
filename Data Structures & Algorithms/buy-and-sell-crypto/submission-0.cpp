class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, k = prices[0], n = prices.size();
        for(int i = 0; i < n; i++) {
            ans = max(ans, prices[i] - k);
            k = min(k, prices[i]);
        }
        return ans;
    }
};
