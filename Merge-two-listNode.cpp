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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //Check if some list is null;
        if(list1 == NULL){return list2;}
        if(list2 == NULL){return list1;}
        //Declare HEAD
        ListNode *HEAD;

        //Define how will start the new node
        if(list1->val < list2->val){
            HEAD = list1;
            list1 = list1->next;
        }else{
            HEAD = list2;
            list2 = list2->next;
        }
        //New dummy node
        ListNode *dummy;
        dummy = HEAD;

        //Iteraction into the node to define the order
        while(list1 && list2){
            if(list1->val < list2->val){
                dummy->next = list1;
                list1 = list1->next;
            }else{
                dummy->next = list2;
                list2 = list2->next;
            }
            dummy=dummy->next;
        }
        //If one list has lower size compared with another. The loop will finish before run through all elements
        // inside the linked list. 
        if(list1 != NULL){
            dummy->next = list1;
        }else{
            dummy->next = list2;
        }
        return HEAD;
    }
};