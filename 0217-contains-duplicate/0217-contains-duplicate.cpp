class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> countMap;

        for (int& num: nums){
            if (countMap.count(num) == 0) 
                countMap[num]=1;
            else 
                return true;
        }

        return false;
    }
};