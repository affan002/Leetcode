class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
         
        while (left<=right) {
            
            while (!isalphaNum(s[left]) && left<right) left++;
            while (!isalphaNum(s[right]) && left<right) right--;

            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }
        return true;

        
    }

    bool isalphaNum(char c) {
        return ('A'<=c && c<='Z' || 
                'a'<=c && c<='z'||
                '0'<=c && c<='9');
    }
};