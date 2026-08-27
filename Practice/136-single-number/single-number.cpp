class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //striver a2z array-easy
        //same number xor - 0       a^a=0
        //any number xor with zero is same number       a^0=a

        int n=nums.size();
        int xorr=0;

        for(int i=0; i<n; i++){
            xorr = xorr ^ nums[i];
        }

        return xorr;
    }
};