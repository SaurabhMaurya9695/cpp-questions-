class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        for(auto i:mp)
            if(i.second == 1)
                return i.first;
        return -1;
        
    }
};



// using xor oper 
int singleNumber(vector<int>& nums) {
        int n = nums.size() , ans = nums[0];
        for(int i = 1 ; i < n ; i++){
            ans = ans ^ nums[i] ;
        }
        return ans ;
    }