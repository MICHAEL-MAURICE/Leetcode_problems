class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int mx=-1e9;
        int i=0;
        for(int j=i;j<nums.size();j++){
            if(sum<0){
                    
                     i++;
                      j=i;
                      sum=0;
                     
                     }
          
            sum+=nums[j];
            
         
            mx=max(mx,sum);
          
          
            
        }
        return mx;
        
    }
};