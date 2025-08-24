class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, int> mapIndex;
        int index = 0;
        // iterate through strs
        for (string& str : strs) {
            string org_str = str;
            std::sort(str.begin(), str.end()); //sorting the string

            // see if sorted string exists in mapIndex
            if (mapIndex.find(str) != mapIndex.end()) {
                output[mapIndex[str]].push_back(org_str);
            } else {//if sorted string isn't in mapIndex
                vector<string> newVector = {org_str};
                mapIndex[str] = index;
                output.push_back(newVector);
                index++;
            }
            

        }

        return output;
    }
};