class Solution {
public:
    int longestPalindrome(string s) {
        int count [128]={0};
        int length = 0;
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            if(count[s[i]] == 2){
                length += 2;
                count[s[i]] = 0;
            }
        }
        return (length == s.length())? length: length+1;
    }
};