/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head, ListNode* tail)
    {
        ListNode* pre = nullptr;
        ListNode* curr = head;

        while (curr != tail)
        {
            ListNode* tmp = curr->next;
            curr->next = pre;
            pre = curr;
            curr = tmp;
        }
        
        return pre;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        //if (head == nullptr) return head;

        auto node = head;
        for (int i = 0; i < k; i++) {
          if ( node == nullptr) {
              return head;
          }

          node = node->next;  
        }

        auto currHead = reverse(head, node);
        auto nextHead = reverseKGroup(node, k);
        
        head->next = nextHead;
        return currHead;
    }
};
// @lc code=end

