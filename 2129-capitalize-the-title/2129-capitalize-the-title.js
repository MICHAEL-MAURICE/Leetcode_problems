/**
 * @param {string} title
 * @return {string}
 */
var capitalizeTitle = function(title) {
 let t="";   
title=title.split(" ")
    if(title[0].length>2){
       t+= title[0][0].toUpperCase();
        t+=title[0].slice(1).toLowerCase();
    }
    else{
        t+= title[0][0].toLowerCase();
        t+=title[0].slice(1).toLowerCase();
    }
    

    for(let i=1;i<title.length;i++){
        t+=' ';
        
         if(title[i].length>2){
        t+= title[i][0].toUpperCase();
        t+=title[i].slice(1).toLowerCase();
    }
    else{
        t+= title[i][0].toLowerCase();
        t+=title[i].slice(1).toLowerCase();
    }
    
    }
    
    return t;
};