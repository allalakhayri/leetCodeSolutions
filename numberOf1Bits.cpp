class Solution {
public:
    int hammingWeight(uint32_t num) {
        int count = 0;
       while(num>0){ 
        count+=num & 1;
        num = num>>1; //right shift
       }
        return count;
    }
};
