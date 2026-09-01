class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> mp;
        int mxf = 0;
        string ans = "";

        for (auto &r : responses) {
            unordered_set<string> st(r.begin(), r.end()); // deduplicate per user
            
            for (auto &x : st) {
                mp[x]++;
                
                if (mp[x] > mxf) {
                    mxf = mp[x];
                    ans = x;
                } 
                else if (mp[x] == mxf) {
                    ans = min(ans, x); // lexicographically smaller
                }
            }
        }
        return ans;
    }
};