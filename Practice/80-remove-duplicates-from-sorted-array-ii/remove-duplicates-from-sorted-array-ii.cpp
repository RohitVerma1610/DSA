class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        int curEleCount = 1;

        for(int i=1; i<n; i++){
            if(nums[i-1] == nums[i]){
                if(curEleCount<2){
                    curEleCount++;
                    nums[i-count] = nums[i];
                }
                else
                    count++;
            }
            else{
                curEleCount=1;
                nums[i-count] = nums[i];
            }
            
        }

        return n-count;

        //end
    }
};