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

    ListNode* mergeLists(ListNode* a,ListNode* b){
        if (!a) return b;
        if (!b) return a;

        ListNode* head = NULL;

        if(a->val < b->val){
            head = a;
            head->next = mergeLists(a->next,b);
        } 
        else{
            head = b;
            head->next = mergeLists(a,b->next);
        }

        return head;
    }

    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)  return head;
        ListNode* mid = findMiddle(head);
        ListNode* right = mid->next;
        mid->next = NULL;  
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);
        return mergeLists(leftSorted,rightSorted);
    }
};
