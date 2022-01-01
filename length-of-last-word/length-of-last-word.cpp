class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
if(s.empty()){
    return len;
}
        int n=s.length()-1;
        while(n){
            if(s.at(n)!=' '){
                break;
            }
            else{
                n-=1;
            }
        }
       // s=s.trim();
        for(int i=n;i>=0;--i){
            
            if(s.at(i)==' '){
                break;
            }
            ++len;
        }
        return len;
    }
};