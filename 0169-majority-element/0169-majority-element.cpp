class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxCount=0;
        int res;
        unordered_map<int, int> hashMap;
        for (int num : nums) {
            if (hashMap.find(num) != hashMap.end()) {
                hashMap[num]++;
            } else {
                hashMap[num] = 1;
            }

            if (hashMap[num] > maxCount) {
                    maxCount = hashMap[num];
                    res = num;
            }
        }
        return res;
    }
};