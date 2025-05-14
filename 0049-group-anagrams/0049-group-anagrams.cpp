class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int index = 0;
        vector<vector<string>> output_arr;
        unordered_map<string,int> map; 
        for (int i=0; i<strs.size(); i++) {
            string cur_str = strs[i];
            sort(cur_str.begin(), cur_str.end());
            if (map.find(cur_str) != map.end()) {
                output_arr[map[cur_str]].push_back(strs[i]);
            } else {
                vector<string> empty_arr;
                output_arr.push_back(empty_arr);
                output_arr[index].push_back(strs[i]);
                map[cur_str] = index;
                index++;
            }
        }
        return output_arr;

    }
};