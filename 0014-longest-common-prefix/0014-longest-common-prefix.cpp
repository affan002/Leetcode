class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = "";
        for (int i=0; i<strs[0].length(); i++) {
            char char_compare = strs[0][i];
            bool is_matching = true;
            for (int j=1; j<strs.size(); j++) {
                if (char_compare!=strs[j][i]) {
                    is_matching = false;
                    break;
                }
            }
        if (is_matching) out += char_compare;
        else break;

        }


        return out;
    }
};