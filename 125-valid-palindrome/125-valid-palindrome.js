/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s=s.toLowerCase().replace(/[^A-Za-z0-9]/g, "");
    
    //let t=s.split("").reverse().join("");

    let i=0,j=s.length-1
    while(i<j){
        
        if(s[i]!=s[j]) return false;
        i+=1;
        j-=1;
    }
    return true;
    
};