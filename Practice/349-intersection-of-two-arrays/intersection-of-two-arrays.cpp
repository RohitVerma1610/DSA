class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        vector<int> ans;

        // Put nums1 elements into set
        for(int num : nums1) {
            seen.insert(num);
        }

        // Check nums2 elements
        for(int num : nums2) {
            if(seen.find(num) != seen.end()) {
                ans.push_back(num);
                seen.erase(num);  // prevent duplicates
            }
        }

        return ans;
    }
};