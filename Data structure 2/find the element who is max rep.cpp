class Solution {
public:
    int majorityElement(vector<int>& nums) {        
        unordered_map<int,int> hash;
        int max=0,el;
        
        for(int i=0;i<nums.size();i++)
            hash[nums[i]]++;
        
        unordered_map<int,int>::iterator curr;
        for(curr=hash.begin();curr!=hash.end();++curr){
            if(curr->second>max){
                max=curr->second;
                el=curr->first;
            }
        }
        
        return el;
    }
};