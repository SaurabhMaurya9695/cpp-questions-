class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v(26);
        int n = s.size();
        for(int i = 0 ; i< n ; i++)
        {
            v[s[i] - 'a'] = i;
        }
        int last = 0;
        int maxi = - 1;
        vector<int> ans ;
        
        for(int i = 0 ; i < n; i++)
        {
            maxi = max(maxi , v[s[i] - 'a']);
            if(i == maxi)
            {
                ans.push_back(i-last+1);
                last = i + 1;
            }
        }
        return ans;
        
    }
};