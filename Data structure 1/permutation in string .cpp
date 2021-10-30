class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
// Corner Case
        if(s1.size() > s2.size())
            return false;
        
// Map to store the string and its number of occurance
        unordered_map<char, int> mp;
        for (char c : s1) {
            mp[c]++;
        }
        
// Sliding Window Approach
        int k = s1.size();
        int i = 0, j = 0, count = mp.size();
       
                        
        while (j < s2.size()){

                
// Check if char of s2 is present in s1 then decrease its freq in map by 1
            if (mp.find(s2[j]) != mp.end()){
                mp[s2[j]]--;
                if (mp[s2[j]] == 0)
                    count--;
                // cout<<count<<endl;
            }
            if (j-i+1 <k) j++;
            
            else if ( k == j-i+1 ){
                if (count == 0) return true;
                
                if (mp.find(s2[i]) != mp.end()){
                    mp[s2[i]]++;
                    if (mp[s2[i]] == 1)
                        count++;
                    cout<<count<<endl;
                }
                j++;
                i++;
            }
        }
        return false;
    }
};