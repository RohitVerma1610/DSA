class Solution {
private:
    int productOfDigits(int num){
        int ans = 1;
        while(num){
            int digit = num%10;
            ans = ans*digit;
            num=num/10;
        }

        return ans;
    }
    
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<=100; i++){
            int prod = productOfDigits(i);
            cout << prod;
            if(prod%t == 0){
                return i;
            }
        }

        return -1;
    }
};