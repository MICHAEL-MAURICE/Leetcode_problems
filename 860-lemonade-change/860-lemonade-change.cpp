class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int t=0;
        int t2=0;
        
        for(auto a:bills){
            
            cout<<f<<" "<<t<<" "<<t2<<endl;
            if(a==5)f++;
            else if(a==10 && f>=1){
                f--;
                t++;
                
            }
           else if(a==20 &&(f>=1&&t>=1)){
                f--;
                t--;
                t2++;
            }
             else if(a==20 &&f>=3){
                 f-=3;
                 t2++;
                 
                 
             }
            else
            return false;
            
            
        }
        return true;
        
    }
};