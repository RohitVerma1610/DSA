class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //striver a2z array-easy (same approach also works for left rotate)
        
        //4,3,2,1,5,6,7     rotate upto k
        //4,3,2,1,7,6,5     rotate last k
        //5,6,7,1,2,3,4     rotate whole array
        
        int n = nums.size();
        k=k%n; // To avoid unnecessary rotations

        reverse(nums.begin(), nums.begin()+n-k);    //as it reverses to 1 index less
        reverse(nums.begin()+n-k, nums.end());     

        reverse(nums.begin(), nums.end());
    }
};