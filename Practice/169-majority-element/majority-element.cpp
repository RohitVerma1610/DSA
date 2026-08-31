class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //striver sde array3 - Moore's Voting Algorithm
        int el; //element
        int cnt = 0;    //count

        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                el = nums[i];
                cnt++;
            }
            else if(el == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        //not necessary as question states it has majority element, check if not stated
        int check = 0;
        for(int i=0; i<nums.size(); i++){
            if(el==nums[i])
                check++;
        }

        if(check > nums.size()/2)
            return el;
        else
            return -1;

        //end
    }
};