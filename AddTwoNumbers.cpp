/*
A linked list is a linear data structure, 
in which the elements are not stored at contiguous memory locations. 
The elements in a linked list are linked using pointers.

In simple words, a linked list consists of nodes where each node contains 
a data field and a reference(link) to the next node in the list.

Solution:
-Dummy node value -1
- (-1) -> (2+5) - > (4+6) -> (3+4)
*/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy node
        ListNode * dummy = new ListNode();
        ListNode * tmp = dummy;
        int carry = 0;
        
        while(l1 || l2 || carry){
            int sum = 0;
            if(l1){
                sum+=l1->val;
                l1 = l1 ->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2 ->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            tmp->next=node;
            tmp = tmp->next;
        }
        return dummy->next;
    }
};