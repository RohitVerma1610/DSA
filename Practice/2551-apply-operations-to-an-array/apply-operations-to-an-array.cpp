class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }

        //move all zeros to last
        //[1,4,0,2,0,0]
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                nums[i-count] = nums[i]; 
            }
        }

        while(count){
            nums[n-count] = 0;
            count--;
        }

        return nums;

        //end
    }
};