class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int l = 0, r = 0;
        string out = "";
        while (l<n1 && r<n2) {
            out += word1[l];
            out += word2[r];
            l++;
            r++;
        }

        if (l<n1) {
            out += word1.substr(l, n1-l);
        } else if (r<n2) {
            out += word2.substr(r, n2-r);
        }

        return out;
        
    }
};