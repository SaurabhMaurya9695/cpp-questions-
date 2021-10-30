class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() , ans = nums[0];
        for(int i = 1 ; i < n ; i++){
            ans = ans ^ nums[i] ; // take xor operation with the next all array elem;
        }
        return ans ;
    }
};