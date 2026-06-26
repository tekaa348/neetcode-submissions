class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(char c : s) {
            if (isalnum(c)) {
                new_s += tolower(c);
            }
        }
        return new_s == string(new_s.rbegin(), new_s.rend());
    }
};
