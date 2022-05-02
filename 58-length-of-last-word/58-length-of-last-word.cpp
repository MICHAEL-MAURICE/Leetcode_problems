class Solution {
public:
    int lengthOfLastWord(string s) {
        
        reverse(s.begin(),s.end());
        int c=0;
        bool f=false;
        for(auto a:s)
        if(a!=' '){
            ++c;
            f=true;
        }
        else if(a==' '&& f)break;
        
        return c;
    }
};