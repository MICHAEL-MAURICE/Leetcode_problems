class Solution {
    
    public:
         long long power(long long x,long long p){
             
             long long res=1;
             while(p){
                 if(p&1){
                     res*=x;
                     p--;
                 }
                 else{
                   
                     x=x*x;
                     p/=2;
                 }
                 
                 
             }
             
             return res;
             
         } 
public:
    bool isPowerOfTwo(int n) {
       if(n==1)return true;
        if(n==2)return true;
        
        long long ret=2;
        for(int i=1;i<=n/i;i++){
               ret*=2; 
           
            if(ret==n){
                return true;
            }
            else if(ret>n)return false;
        }
        
        return false;
    }
};