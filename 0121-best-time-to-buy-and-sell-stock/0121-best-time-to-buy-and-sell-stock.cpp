class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max = 0;
        int l=0;
        int r=0;

        while(r < prices.size()) {
            int diff = prices[r] - prices[l];
            if (diff>Max) Max = diff;
            if (prices[r] < prices[l]) {
                l = r;
            } 
            r++;
        }

        return Max;
    }
};