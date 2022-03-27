class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int sum=nums[0],maxx=nums[0];
        for(int i=1;i<nums.size();i++){
            
         
              sum=max(sum+nums[i],nums[i]);
            maxx=max(sum,maxx);
        
            }
            
        
        
        return maxx;
        
    }
};