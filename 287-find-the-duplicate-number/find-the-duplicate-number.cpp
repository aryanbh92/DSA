class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Create an unordered_set to store numbers we've already seen
        unordered_set<int> s;

        // Loop through each number in the input array
        for(int val : nums) {
            // Check if the current number is already in the set
            if(s.find(val) != s.end()) 
                return val;  // If yes, it's the duplicate → return it immediately

            // Otherwise, insert the number into the set for future checks
            s.insert(val);
        }

        // If no duplicate is found (though problem guarantees one exists), return -1
        return -1; 
    }
};
