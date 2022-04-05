class Solution {
public:
    int maxProfit(vector<int>& p) {
        
    int minn=1e4+5;
        int maxx=0;
        for(int i=0;i<p.size();i++){
            
            if(minn>p[i])
                minn=p[i];
            else{
                maxx=max(maxx,p[i]-minn);
            }
            
        }
        return maxx;
    }
};