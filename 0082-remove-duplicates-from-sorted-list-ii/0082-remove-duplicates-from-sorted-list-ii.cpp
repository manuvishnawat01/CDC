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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy ;
        prev->next = head;
        while(temp!=nullptr&&temp->next!=nullptr){
            if(temp->next->val==temp->val){
                int v = temp->val;
                while(temp!=nullptr){
                    if(temp->val==v)temp = temp->next;
                    else break ;
                }
                prev->next = temp;
            }
            else{
                prev = temp ;
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};