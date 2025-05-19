class Solution {
public:
    vector<int> count = {0,0,0};
    void sortColors(vector<int>& nums) {
        for (int num: nums) {
            count[num]++;
        }
        int index =0;
        for (int i=0; i<3; i++) {
            while (count[i]>0) {
                nums[index]=i;
                index++;
                count[i]--;
            }
        }
    }
};