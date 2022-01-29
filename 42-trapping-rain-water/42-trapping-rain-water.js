/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(h) {

    let t=0;
    for(let i=0;i<h.length;i++){
        let r=i,l=i,mr=0,ml=0;
        while(r>=0){
            mr=Math.max(mr,h[r]);
            r-=1;
        }
        while(l<h.length){
            ml=Math.max(ml,h[l]);
            l++;
        }
        const w=Math.min(ml,mr)-h[i];
        t+=w;
    }
    return t;
};



  /*  let arr=0;
    let c=0;
    let a=0
    let i=0,j=i+1;
    while(i<h.length){
         if(j<h.length){
            i++;
            j=i+1;
            
        }
        if(h[j]>=h[i]){
            a=h[i]*(j-i);
            a-=arr;
            c+=a;
            i=j;
            arr=0;
            
        }
        else{
            arr+=h[j];
        }
       
        j+=1;
        
        
    }
    return c;*/