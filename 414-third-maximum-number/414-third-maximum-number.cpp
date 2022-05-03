class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        set<int>s;
        for(auto a:nums)s.insert(a);
              int mx=*s.begin();
        int c=1;
    
        
        
        if(s.size()==2){
            auto a= s.begin();
            a++;
            return *a;
            
        }
        
        else{
    
            set<int, int>::reverse_iterator it = s.rbegin();
            it++;
            it++;
            return *it;
            
            
        
        
        }
        return *s.begin();
    }
};