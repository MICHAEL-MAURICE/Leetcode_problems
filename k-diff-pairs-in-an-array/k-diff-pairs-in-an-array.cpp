class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
    if(k < 0) return 0;
        int res = 0;
        unordered_map<int, int> ump;
       
        for(auto &n : nums) ump[n]++;
        
        for(auto n : ump){
            if(k == 0){
                if(n.second >= 2) res++;
            }
            else{
                if(ump.find(n.first + k) != ump.end()) res++;
            }
        }
        return res;
    }



};