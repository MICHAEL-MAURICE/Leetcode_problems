class Solution {
public:
    
   
    
    int subtractProductAndSum(int n) {
      int p=1,s=0;
        
        while(n){
             int n1=n%10;
            p*=n1;
            s+=n1;
            n=n/10;
            
        }
       
        return p-s;
    }
};