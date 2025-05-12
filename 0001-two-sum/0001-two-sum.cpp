class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        unordered_map<int, int> num_visited;
        for (int i=0; i<nums.size(); i++) {
            int cur_num = nums[i];
            int num_to_find = target - cur_num;
            if (num_visited.contains(num_to_find)) {
                out.push_back(num_visited.at(num_to_find));
                out.push_back(i);
                return out;
            
            } 
            num_visited.insert({cur_num, i});
        }
        return out;
    }   
};