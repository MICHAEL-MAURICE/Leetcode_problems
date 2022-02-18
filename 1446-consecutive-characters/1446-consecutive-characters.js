/**
 * @param {string} s
 * @return {number}
 */


var maxPower = function(s) {
    let m=1,pow=0;
    for(let i=0;i<s.length;){
        m=1;
        let j=i+1;
        
        while(j < s.length && s[j]==s[i])
            j++;
            pow= Math.max(pow, j - i);
            i = j;
        
    }
    
    return pow;
}