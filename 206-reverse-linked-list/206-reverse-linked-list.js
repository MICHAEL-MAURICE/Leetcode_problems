/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
   

    
       let cur=head;
        
        let end=null;
    while(cur){
        let c=cur.next;
        cur.next=end;
        end=cur;
        cur=c;
        
    }
     
    return end;
   /*
   
    let cur=head;
   
    let prev=null;
    while(cur){
        let cc=cur.next;
        cur.next=prev;
        prev=cur;
        cur=cc;
    }
    return prev;
    
   
   
   */ 
    
    
    
    
};