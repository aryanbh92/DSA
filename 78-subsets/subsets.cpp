class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back({});   // start with empty subset

        for (int num : nums) {
            int n = res.size();
            for (int i = 0; i < n; i++) {
                vector<int> subset = res[i]; // copy existing subset
                subset.push_back(num);       // add current number
                res.push_back(subset);       // store new subset
            }
        }
        return res;
    }
};
