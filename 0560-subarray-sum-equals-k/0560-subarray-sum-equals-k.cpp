class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixcount;
        prefixcount[0]++;
        int prefix_sum = 0;
        int res = 0;
        int prefixToRem;

        for (int i=0; i<nums.size(); i++) {
            prefix_sum += nums[i];
            prefixToRem = prefix_sum-k;
            res += prefixcount[prefixToRem];
            prefixcount[prefix_sum]++;
        }

        return res;
    }
};