class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        //unordered_set<int> seen(nums.begin(), nums.end());
        unordered_set<int> seen;

        for(int i=0; i<nums.size(); i++){
            seen.insert(nums[i]);   //for O(1) lookup
        }

        int cur = k;
        while(seen.find(cur) != seen.end()){
            cur += k;
        }

        return cur;
    }
};