class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> counter;
        int n = nums.size();
        for (int& num: nums) {
            counter[num]++;
        }
        vector<int> result;
        for (const auto& pair: counter) {
            if (pair.second > n/3) result.push_back(pair.first);
        }

        return result;
    }
};