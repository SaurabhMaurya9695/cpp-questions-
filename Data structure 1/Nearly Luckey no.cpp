class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
        int n = arr.size() ;
        int inc = 0 ;
        int exc = 0 ;
        vector<int> v (1000);
        for(int  i = 0 ; i< n ; i++)
        {
            v[arr[i]] ++ ;
            
        }
        for(int i = 0 ; i<= 1000 ; i++)
        {
            int n1 = exc +  arr[i] * i;
            int n2 = max(inc,exc);
            inc = n1;
            exc = n2;
        }
        return max(inc, exc);
    }
};