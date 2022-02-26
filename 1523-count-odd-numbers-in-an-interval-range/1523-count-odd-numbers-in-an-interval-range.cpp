class Solution {
public:
    int countOdds(int low, int high) {
        int r=(high-low)/2;
        
        if(high&1 || low&1)++r;
        return r;
    }
};