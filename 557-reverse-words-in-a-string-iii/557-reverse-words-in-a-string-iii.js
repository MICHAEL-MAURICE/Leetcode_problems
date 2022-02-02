/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let t="",tt="";
    
    for(let i of s ){
        if(i!=' '){
            tt+=i;
            
        }
        else if(i===' '){
             const dd=tt.split("").reverse().join("")
            
            t+=dd+" ";
            tt="";
        }
        
        
        
    }
    
     const dd=tt.split("").reverse().join("")
            
            t+=dd;
            tt="";
    return t;
};