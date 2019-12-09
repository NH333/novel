/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode(0); // 增加个头结点
        ListNode l3Temp = l3;
        
        // 增加一个头结点
        ListNode l1Temp = new ListNode(0);
        l1Temp.next = l1;
        ListNode l2Temp = new ListNode(0);
        l2Temp.next = l2;
        int carry = 0;
        while (l1Temp.next != null) {
            if (l2Temp.next == null) {
                // 接下来只需要遍历 l1，全部插入 l3 即可
                insertListAll(l3Temp, l1Temp, carry);
                return l3.next;
            }
            
            int val = l1Temp.next.val + l2Temp.next.val + carry;
            int remainder = val % 10;
            carry = val / 10;
            
            l3Temp.next = new ListNode(remainder);
            
            l1Temp = l1Temp.next;
            l2Temp = l2Temp.next;
            l3Temp = l3Temp.next;
        }
        
        if (l2Temp.next != null) {
            insertListAll(l3Temp, l2Temp, carry);
            return l3.next;
        }
        
        if (carry != 0) {
            l3Temp.next = new ListNode(carry);
        }
        
        return l3.next;
    }
    
    public void insertListAll(ListNode lTo, ListNode lFrom, int carry) {
        while (lFrom.next != null) {
            int val = lFrom.next.val + carry;
            int remainder = val % 10;
            carry = val / 10;
            
            lTo.next = new ListNode(remainder);
            lTo = lTo.next;
            lFrom = lFrom.next;
        }
        
        if (carry != 0) {
            lTo.next = new ListNode(carry);
        }
    }
}