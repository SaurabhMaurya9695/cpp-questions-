// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         bitset<32> ans(n);
//         return ans.count();
        
//     }
// };




class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n>0){
            if(n & 1 == 1) count++;
            n = n >> 1;
        }
        return count;
    }
};