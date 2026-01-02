class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>  num_visited;
        for (int i=0; i<nums.size(); i++){
            int desired_num = target - nums[i];
            if (num_visited.find(desired_num) != num_visited.end()) {
                return {num_visited[desired_num], i};
            }
            num_visited[nums[i]] = i;
        }
        return {};
    }
};