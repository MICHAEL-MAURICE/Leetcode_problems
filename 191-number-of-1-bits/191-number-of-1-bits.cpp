class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n){
            int p=n%2;
            n/=2;
            if(p==1){c++;}
            
        }
        return c;
    }
};