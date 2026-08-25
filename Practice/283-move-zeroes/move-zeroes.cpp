class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //striver a2z array-easy
        int count=0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==0)
                count++;
            else
                nums[i-count]=nums[i];
        }

        while(count){
            nums[n-count]=0;
            count--;
        }
    }
};