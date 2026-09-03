class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        int n = arr.size();

        for(int i=n-1; i>=0; i--){
            int temp = maxi;

            if(arr[i]>maxi){
                maxi = arr[i];
            }

            arr[i] = temp;
            
        }

        return arr;
    }
};