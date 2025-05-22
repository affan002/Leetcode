class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest_seq = 0;
        // making a set 
        unordered_set<int> nums_set(nums.begin(), nums.end());
        // iterate over set
        for(const int num: nums_set) {
            if (!nums_set.contains(num-1)) {
                int seq_length = 1;
                while(nums_set.contains(num+seq_length)) {
                    seq_length++;
                }
                if (seq_length > longest_seq) longest_seq = seq_length;
            }

        }
        return longest_seq;


    }
};