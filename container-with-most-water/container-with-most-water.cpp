class Solution {
public:
    int maxArea(vector<int>& he) {
        
        int hm=he[0];
        int s=he.size();
      
        int w=s-1;
        int mx=0;
        int i=0,j=s-1;
        
        while(i<j){
            w=j-i;
            if(he[i]<he[j]){
                 hm=he[i];
                i++;
            }
               
            else{
                hm=he[j];
                j--;
            }
            
            mx=max(mx,(hm*w));
            
            
        }
        
        return mx;
        
        
    }
};