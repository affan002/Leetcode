class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> hashSet;
        for (int num: nums) {
            hashSet[num] = 1;
        }
        
        for (int i=1; i<=nums.size(); i++) {
            if (hashSet[i]<1) {
                return i;
            }
        }
    return nums.size()+1;
    }
};