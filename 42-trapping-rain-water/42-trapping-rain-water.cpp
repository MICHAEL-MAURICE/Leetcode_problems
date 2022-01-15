class Solution {
public:
    int trap(vector<int>& h) {
        if (h.size()==0)return 0;
        int lower=0;
       int l=0,r=h.size()-1,res=0,level=0;
        while(r>l){
            
            if(h[l]<h[r])
            {
                lower=h[l++];
                
            }else{
                lower=h[r--];
                
            }
            
            level=max(level,lower);
            res+=level-lower;
            
        }
        
        
        return res;
    }
};