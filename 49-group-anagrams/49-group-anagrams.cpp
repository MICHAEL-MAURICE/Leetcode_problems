class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
       
        unordered_map<string,vector<string>>m;
        vector<vector<string>>v;
        string temp;
        for(auto a:s){
        temp =a;
            sort(a.begin(),a.end());
            m[a].push_back(temp);
        
        
        }
        
        for(auto a:m){
            v.push_back(a.second);
        }
        
        return v;
    }
};