class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i += 2) {
            ans[i] = nums[i + 1];     // Bob’s pick (larger of the two)
            ans[i + 1] = nums[i];     // Alice’s pick (smaller of the two)
        }
        return ans;
    }
};
