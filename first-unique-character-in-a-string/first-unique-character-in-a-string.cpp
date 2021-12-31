class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        vector<int>v(26);
        for(int i=0;i<s.size();i++)
            m[s[i]-'a']++;
        for(int i=0;i<s.size();i++){
            if(m[s[i]-'a']==1)
                return i;
            
        
            
            
            
        }
        return -1;
        
    }
};