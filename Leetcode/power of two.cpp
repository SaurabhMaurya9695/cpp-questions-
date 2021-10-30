class Solution {
public:
    bool isPowerOfTwo(long long int n) {
		if(n==0)
            return false;
	
        bool ans=(n&n-1)==0;
        return ans;
    }
};