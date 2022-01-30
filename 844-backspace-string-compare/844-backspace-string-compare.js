/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var backspaceCompare = function(s, t) {
    let s2=[],t2=[];
    for(let i of s){
        if(i=='#')
            s2.pop();
        else
            s2.push(i);
    }
     for(let i of t){
        if(i=='#')
            t2.pop();
        else
            t2.push(i);
    }
    
    let ss="",tt="";
    for(let i of s2){
        ss+=i;
    }
    for(let i of t2){
        tt+=i;
    }
    return ss==tt;
    
};