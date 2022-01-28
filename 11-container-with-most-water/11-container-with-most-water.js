/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let i=0;
    let j=height.length-1;
    let ans=0;
    while(i<=j){
        let h=Math.min(height[i],height[j]);
    
        let a=(h*(j-i));
        ans=Math.max(ans,a);
        if(height[i]===h){
            i+=1;
        }
        else{
            j-=1;
        }
        
    }
    return ans;
    
};