class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>v;
        int n=1;
        int n2=1;
        int nn=1,no=0;
        for(int i=0;i<nums.size();i++){
            n*=nums[i];
            if(nums[i]!=0)
                n2*=nums[i];
            if(nums[i]==0)
                no++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
             nn=n/nums[i];
            else if(no>1)
                nn=0;
            else 
               nn=n2-nums[i]; 
            v.push_back(nn);
        }
        return v;
    }
};