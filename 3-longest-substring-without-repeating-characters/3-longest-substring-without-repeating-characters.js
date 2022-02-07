/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    if(s.length<=1)return s.length;
    
    let longest=0;
    let left=0
    let seen={}; let long=0;
    
    for(let right=0;right<s.length;right++){
        if(seen[s[right]]>=left){
            left=seen[s[right]]+1;
        }
        seen[s[right]]=right;
        
        longest=Math.max(longest,right-left+1);
    }
   /* for(let i=0;i<s.length;i++){
        let seenchar={}; let long=0;
        for(let j=i;j<s.length;j++){
            
            if(!seenchar[s[j]]){
                long+=1;
                seenchar[s[j]]=true;
                longest=Math.max(longest,long);
                
            }
            else{
                break;
            }
            
        }
    }*/
    return longest;
};