/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
  var h = new ListNode(0);
  var ll = h;
  var rr = h;
  
  h.next = head;

  for (var i = 0; i < n + 1; i++) {
    rr = rr.next;
  }

  while (rr !== null) {
    ll = ll.next;
    rr= rr.next;
  }
  
  ll.next = ll.next.next;
  
  return h.next;
};