class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        int count = 1;

        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == res) {
                count++;

            } else if (nums[i] != res) {
                if (count == 0) {
                    res = nums[i];
                    count++;
                    continue;
                }

                count--;
            }
        }
        return res;
    }
};