class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_visited;
        for (int i=0; i<nums.size(); i++) {
            int wanted_number = target - nums[i];
            if (num_visited.find(wanted_number) != num_visited.end()) {
                return {num_visited[wanted_number], i};
            }
            num_visited[nums[i]]=i; 
        }
        return {0, 0};
    }
};