/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let n=[],c=0;
    
    for(let i of nums){
        if(i==0){
            c+=1;}
        else{
            
            n.push(i);
            
        }
    }

    
    while(c--){
         n.push(0);
        
    }
     
for(let i=0;i<n.length;i++)
    nums[i]=n[i];
    
};