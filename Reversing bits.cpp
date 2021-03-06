class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++){
            uint32_t tmp = n >> i;
            if (tmp % 2 == 1){
                res += pow(2, 31 - i);  
            } 
        }
        return res;
        
    }
};