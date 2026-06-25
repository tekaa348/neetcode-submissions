class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string s : details) {
            int num = (s[11] - '0') * 10 + (s[12] - '0');
            if (num > 60) ans++;
        }
        return ans;
    }
};