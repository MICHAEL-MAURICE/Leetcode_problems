class Solution {
public:
    bool isPalindrome(string s) {
         transform(s.begin(), s.end(), s.begin(), ::toupper);
        string s3;
        for(auto ch:s){
             if(isalnum(ch))
                s3+=ch;
        }
        string s2=s3;
            reverse(s3.begin(), s3.end());
        return s3==s2;
        
    }
};