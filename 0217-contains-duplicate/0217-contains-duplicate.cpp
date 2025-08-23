class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashmap = {};
        for (int& num : nums) {
            if (hashmap[num]) return true;
            else hashmap[num]++;
        }
        return false;
    }
};