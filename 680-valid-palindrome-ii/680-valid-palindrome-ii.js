/**
 * @param {string} s
 * @return {boolean}
 */

var validsub=function(s,i,j){
     while(i<j){
        
        if(s[i]!==s[j]) return false;
        i+=1;
        j-=1;
    }
    return true;
    
    
}
var validPalindrome = function(s) {
    let c=0;
     let i=0,j=s.length-1
    while(i<j){
        
        if(s[i]!=s[j]) return validsub(s,i+1,j)||validsub(s,i,j-1);
        i+=1;
        j-=1;
    }
    return true;
    
};