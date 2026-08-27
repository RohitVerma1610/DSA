class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //striver a2z array-easy

        int n = nums.size();    //same for both approach
        // int sum=0;

        // for(int i=0; i<n; i++){
        //     sum += nums[i];
        // }

        // long Sn = (n*(n+1))/2;  //sum of n numbers

        // return Sn-sum;
        int xor1=0, xor2=0; //a^a=0  a^0=a

        for(int i=0; i<n; i++){ //better as we dont take long
            xor1 = xor1^(i+1);
            xor2 = xor2^nums[i];
        }

        return xor1^xor2;

    }
};
