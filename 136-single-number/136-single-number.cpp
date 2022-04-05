class Solution {
public:
    int singleNumber(vector<int>& nums) {
    map<int,int>m;
        for(auto a:nums){
            
            if(m[a])
                m[a]++;
            else
                m[a]=1;
        }
        for(auto a:m){
            if(a.second==1)
                return a.first;
        }
    
    return -1;
    }
};