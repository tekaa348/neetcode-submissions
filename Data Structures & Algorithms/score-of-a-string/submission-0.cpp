class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            if (i + 1 == n) break;
            int k = abs(s[i] - s[i + 1]);
            ans += k;
        }
        return ans;
    }
};