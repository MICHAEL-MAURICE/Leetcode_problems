class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int r=nums[0];
        
        for(int i=1;i<nums.size();i++){
            r ^=nums[i];
        }
        return r;
    }
};