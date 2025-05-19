class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<vector<int>> count_arr(n+1);
        unordered_map<int,int> count_map;

        for (int num: nums) {
            count_map[num]++;
        }

        for (auto& c: count_map) {
            count_arr[c.second].push_back(c.first);
        }
        vector<int> output;
        int limit_k = 0;
        for (int i=n; i>=0 && limit_k<k; i--) {
            for (int num:count_arr[i]) {
                output.push_back(num);
                limit_k++;
                if (limit_k == k) break;
            }
        }
        return output;
    }


};