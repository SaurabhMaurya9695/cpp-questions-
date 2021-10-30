class Solution {
public:
    // This code is only vaid when order matters, 
    // i.e for 3 stairs : [1, 2] and [2, 1] will be considered as two different ways.
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};