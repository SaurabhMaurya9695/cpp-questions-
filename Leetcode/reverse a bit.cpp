class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i=0; i < 32; i++){
            ans = ans << 1; // it  means ans = ans * 2;
            if(n & 1 == 1) // this means n % 2 == 1 ;
                 ans++;
            n = n >> 1; // it  means ans = ans / 2;
        }
        return ans;
    }
};