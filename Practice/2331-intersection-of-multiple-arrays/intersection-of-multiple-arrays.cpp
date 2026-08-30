class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int row = nums.size();

        for(int i=0; i<row; i++){
            int col = nums[i].size();

            for(int j=0; j<col; j++){
                mpp[nums[i][j]]++;
            }
        }

        for(auto num: mpp){
            if(num.second == row){
                ans.push_back(num.first);
            }
        }

        sort(ans.begin(), ans.end());


        return ans;
    }
};