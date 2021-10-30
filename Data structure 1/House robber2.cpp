class Solution {
public:
    
   int solve(vector<int>nums, int l, int r){
        vector<int> dp(nums.size()-1);
        dp[0]=nums[l];
        dp[1]=max(nums[l], nums[l+1]);
        for(int i=2 ; i<dp.size() ; i++){
            dp[i]=max(dp[i-1], nums[i+l]+dp[i-2]);
        }
        return dp[dp.size()-1];
    }
    
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return max(nums[0], nums[1]);
        
        return max(solve(nums, 0, n-2) ,solve(nums, 1, n-1));
    }
};