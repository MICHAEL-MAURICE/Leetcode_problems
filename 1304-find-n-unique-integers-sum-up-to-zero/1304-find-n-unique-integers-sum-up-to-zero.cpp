class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
    
        
        int i=1;
        for(int i=1;i<n;){
            v.push_back(i);
            v.push_back(-i);
            i+=2;
            
            
        }
        
         while(v.size()>n){
            v.pop_back();
        }
         while(v.size()<n){
            v.push_back(0);
        }
        return v;
    }
};