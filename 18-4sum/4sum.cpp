class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int p = j + 1, q = n - 1;

                while (p < q) {
                    long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];

                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        q--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;
                        // Skip duplicates
                        while (p < q && nums[p] == nums[p - 1]) p++;
                        while (p < q && nums[q] == nums[q + 1]) q--;
                    }
                }
                // Skip duplicates for j
                while (j + 1 < n && nums[j] == nums[j + 1]) j++;
            }
            // Skip duplicates for i
            while (i + 1 < n && nums[i] == nums[i + 1]) i++;
        }

        return ans;
    }
};
