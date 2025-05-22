class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest_seq = 0;
        // making a set 
        set<int> nums_set(nums.begin(), nums.end());
        // iterate over set
        for(const int& num: nums_set) {
            if (!nums_set.contains(num-1)) {
                int seq_length = 1;
                vector<int> cur_seq;
                // cur_seq.push_back(num);
                int cur_num=num;
                while(nums_set.contains(cur_num+1)) {
                    // cur_seq.push_back(cur_num);
                    cur_num++;
                    seq_length++;
                }
                if (seq_length > longest_seq) longest_seq = seq_length;
            }

        }
        return longest_seq;


    }
};