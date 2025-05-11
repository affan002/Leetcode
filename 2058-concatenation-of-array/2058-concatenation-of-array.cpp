class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out = nums;
        for (auto& num:nums)
            out.push_back(num);
        return out;
    }
};