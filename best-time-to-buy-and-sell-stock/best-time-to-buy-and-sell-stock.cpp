class Solution {
public:
    int maxProfit(vector<int>& p) {
        
    
       int min=INT_MAX;
        int maxx=0;
        for(int i=0;i<p.size();i++){
            if(min>p[i]){
                min=p[i];
                
            }
            else{
                maxx=max(maxx,p[i]-min);
                
            }
            
            
        }
        return maxx;
    }
};