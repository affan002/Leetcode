class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int r = n-1;
        int l = 0;

        while (true) {
            int currSum = num[l] + num[r];
            if (currSum == target) {
                vector<int> output = {l+1, r+1};
                return output;
            } else if (currSum<target) {
                l++;
            } else {
                r--;
            }
        }
    }
};