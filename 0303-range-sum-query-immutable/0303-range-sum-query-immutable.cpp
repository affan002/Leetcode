class NumArray {
public:
    vector<int> prefix_sums;
    NumArray(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            if (i>0) prefix_sums.push_back(nums[i] + prefix_sums[i-1]);
            else prefix_sums.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if (left>0) {
            return prefix_sums[right]-prefix_sums[left-1];
        }
        return prefix_sums[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */