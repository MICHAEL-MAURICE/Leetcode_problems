/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, m, n) {
  
    let cur=head; let start=head; let pos=1;
    
    
    while(pos<m){
        
        start=cur;
        cur=cur.next;
        pos+=1;
        
    }
    
    let newlist=null;  let tail=cur;
    
    while(pos>=m&&pos<=n){
        
        let c=cur.next;
        cur.next=newlist;
        newlist=cur;
        cur=c;
        
        
        pos+=1;
    }
    start.next=newlist;
    tail.next=cur;
    
    
    if(m>1)return head;
    
    return newlist;
    
    
    
    
    
    
    
};