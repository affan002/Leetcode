class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int r = num.size()-1;
        int l = 0;

        while (true) {
            
            if (num[l]+num[r] == target) {
                return vector<int>{l+1, r+1};
            } else if (num[l]+num[r]<target) {
                l++;
            } else {
                r--;
            }
        }
    }
};