class Solution {
public:
    int rob(vector<int>& arr) {
        
        if(arr.size()==1)
            return arr[0];
        vector<int>dp(arr.size(),0);
        
        dp[0]=arr[0];
        dp[1]=arr[1];
        
        
        int ans=max(dp[0],dp[1]);
        int mx=dp[0];
        for(int i=2;i<arr.size();i++)
        {
            mx=max(mx,dp[i-2]);
            dp[i]=arr[i]+mx;
            
            ans=max(ans,dp[i]);
        }
        
        return ans;
    
    
        
    }
};