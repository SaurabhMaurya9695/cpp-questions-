class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.empty())
            return 0;
        int sum = 0,count = 0;
        unordered_map<int,int> m;
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum == k)
            {
                count++;
            }
            if(m[sum - k])
            {
                count += m[sum-k];
            }
            m[sum]++;
        }
        return count;
    }
};