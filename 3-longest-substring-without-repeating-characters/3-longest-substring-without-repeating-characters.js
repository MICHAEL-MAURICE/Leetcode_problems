/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    
    let longest=0;
    for(let i=0;i<s.length;i++){
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
    }
    return longest;
};