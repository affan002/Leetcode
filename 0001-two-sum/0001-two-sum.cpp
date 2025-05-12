class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_visited;
        for (int i=0; i<nums.size(); i++) {
            int cur_num = nums[i];
            int num_to_find = target - cur_num;
            if (num_visited.contains(num_to_find)) 
                return {num_visited[num_to_find], i};
            num_visited[cur_num] = i;
        }
        return {};
    }   
};