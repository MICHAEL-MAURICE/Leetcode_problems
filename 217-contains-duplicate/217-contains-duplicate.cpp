class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            
            if(!m[nums[i]]){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
                return true;
            }
            
        }
        return false;
    }
};