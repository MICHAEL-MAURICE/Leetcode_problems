class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        int value=0, index=0;
        while(true){
            
            
            value=0;
            while(n){
                
                index=n%10;
                value+=index*index;
                n/=10;
                
                
            }
            
            if (value==1)
                return true;
            else if(s.find(value)!=s.end())
                return false;
                
                
                s.insert(value);
            n=value;
                
            
            
            
            
            
        }
        return false;
        
    }
};