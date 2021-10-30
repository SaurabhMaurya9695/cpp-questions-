class Solution {
public:
    void helper(vector<int>& v, vector<vector<int>>& sol, int n,int k,int start)
    {
        if(k==0)
        {
            sol.push_back(v);
            return;
        }    
        for(int i=start;i+k<=n+1;i++)
        {
            v.push_back(i); 
            helper(v,sol,n,k-1,i+1);
            v.pop_back();
        }    
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> sol;
        vector<int> v;
        helper(v,sol,n,k,1);
        return sol;
    }
};