class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ans(2);

        unordered_set<int> set1;
        unordered_set<int> set2;

        // Put nums1 into set1
        for(int num : nums1) {
            set1.insert(num);
        }

        // Put nums2 into set2
        for(int num : nums2) {
            set2.insert(num);
        }

        // Find elements present in nums1 but not nums2
        for(int num : set1) {
            if(set2.find(num) == set2.end()) {
                ans[0].push_back(num);
            }
        }

        // Find elements present in nums2 but not nums1
        for(int num : set2) {
            if(set1.find(num) == set1.end()) {
                ans[1].push_back(num);
            }
        }

        return ans;
    }
};