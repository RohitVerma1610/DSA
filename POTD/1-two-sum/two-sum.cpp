class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //striver a2z array-med
        int n = nums.size();
        unordered_map <int, int> mpp;

        for(int i=0; i<n; i++){
            int moreNeeded = target-nums[i];

            //mpp.find(moreNeeded): This function searches for the key moreNeeded in the unordered
            //map mpp. If the key is found, find returns an iterator pointing to the element;
            //otherwise, it returns mpp.end(), indicating that the key is not present
            if(mpp.find(moreNeeded) != mpp.end()){
                return {i, mpp[moreNeeded]};
            }

            mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
};