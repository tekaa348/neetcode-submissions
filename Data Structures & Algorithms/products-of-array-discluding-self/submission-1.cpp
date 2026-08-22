class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = 1, k2 = 1, c = 0;
        for(int i = 0; i < nums.size(); i++) {
            k *= nums[i];
            if (nums[i] == 0) c++;
        }
        if (c > 1) return vector<int>(nums.size(), 0);
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(k / nums[i]);
            else {
                for(int i = 0; i < nums.size(); i++) {
                    if (nums[i] != 0) k2 *= nums[i];
                }
                ans.push_back(k2);
            }
        }
        return ans;
    }
};
