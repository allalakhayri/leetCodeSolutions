class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0"; 
        }
        string hex="";   
        const string hexDigits = "0123456789abcdef"; 
        uint32_t unsignedNum = static_cast<uint32_t>(num);
        while(unsignedNum > 0){ 
            int remainder = unsignedNum % 16;
            hex = hexDigits[remainder] + hex;
           unsignedNum/=16; 
        }
        return hex; 
    }
};