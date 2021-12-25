class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*vector<pair<int,int>>num2;
        vector<int>t;
        for(int i=0;i<nums.size();i++){
              pair<int,int>temp(nums[i],i);
        
            num2.push_back(temp);
    
            
        }
        sort(num2.begin(),num2.end());
        int i=0;
        int j=num2.size()-1;
        
        while(i<j){
            if(num2[i].first+num2[j].first==target){
            t.push_back(num2[i].second);
                t.push_back(num2[j].second);
                return t;
            }
            else if(num2[i].first+num2[j].first>target)--j;
            else i++;
            }
  return t; */
    map<int,int>m;
        
    for(int i=0;i<nums.size();i++){
        
        auto a=m.find(target-nums[i]);
        if(a!=m.end()){
            
            return{a->second,i};
        }
        m[nums[i]]=i;
    }
    return{};
    
    
    }
};