class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        int i=0;
        map<int,int>m;
        for(auto a:arr){
            if(m[a])m[a]++;
            else m[a]=1;
            
        }
        
        for(auto a:m){
            s.insert(a.second);
            i++;
        }
        
        if(m.size()==s.size())return true;
        return false;
    }
};