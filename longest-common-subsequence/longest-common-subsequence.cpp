class Solution {
public:
   int dp[1004][1004];
    
    int longestCommonSubsequence(string text1, string text2) {
    
        int n=text1.size(),m=text2.size();
        for(int idx=1;idx <=n;idx++)
            for(int idx2=1;idx2<=m;idx2++){
                
                if(text1[idx-1]==text2[idx2-1])
                    dp[idx][idx2]=dp[idx-1][idx2-1] +1;
                
                
                dp[idx][idx2]=max(dp[idx-1][idx2],dp[idx][idx2]);
                dp[idx][idx2]=max(dp[idx][idx2],dp[idx][idx2-1]);
                
            }
        
        return dp[n][m];
    }
};