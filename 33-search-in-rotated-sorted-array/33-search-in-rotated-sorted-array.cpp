class Solution {
    public:
    int search1(vector<int>& nums,int s,int l,int b){
        if (l<s)return -1;
        int mid=s+(l-s)/2;
        if(nums[mid]==b)return mid;
        if(nums[s]<=nums[mid])
        {
            if(nums[s]<=b&&nums[mid]>=b)
                return search1(nums,s,mid-1, b);
           
            return search1(nums,mid+1,l, b);
            
        }
        
        
        else if(nums[mid]<=nums[l])
        {
        if(nums[mid]<=b&&nums[l]>=b)
             return search1(nums,mid+1,l, b);
         return search1(nums,s,mid-1, b);
        }
       return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        
        int i=0;
        for(auto a:nums){
            if(a==target){
                return i;
            }
            i++;
                
        }
        
      /*  int s=0,l=nums.size()-1;
        int i=  search1(nums,0,l, target);
        if(i!=-1)return i;
        else 
            return -1;
     */   
        return -1;
    }
};