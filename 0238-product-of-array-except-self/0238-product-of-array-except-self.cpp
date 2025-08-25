class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix_prod(n,1);
        vector<int> suffix_prod(n,1);
        int prefix=1;
        for (int i=0; i<n; i++) {
            prefix_prod[i] = prefix;
            prefix*=nums[i];
        }
        prefix=1;
        for(int i=n-1; i>=0; i--) {
            suffix_prod[i] = prefix;
            prefix*=nums[i];
        }

        vector<int> res;
        for (int i=0; i<n; i++) {
            res.push_back(prefix_prod[i]*suffix_prod[i]);
        }
        return res;
    }
};