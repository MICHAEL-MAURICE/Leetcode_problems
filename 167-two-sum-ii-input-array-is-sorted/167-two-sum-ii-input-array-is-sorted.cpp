class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int si=numbers.size();
        vector<int> res;
        int i=0;
           int j=si-1;
            
            while(i<=j){
                
                if(numbers[i]+numbers[j]==target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res; 
                }
                else if(numbers[i]+numbers[j]>target){
                    j--;
                    
                }
                else{
                    i++;
                }
                
               
            }
        
        
            
       return res; 
    }
};