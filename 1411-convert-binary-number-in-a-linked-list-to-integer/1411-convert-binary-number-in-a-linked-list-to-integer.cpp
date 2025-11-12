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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }

        temp = head;
        int ans = 0;
        count = count-1;
        while(temp!=NULL){
            int a = temp->val;
            if(a==1) ans = pow(2,count) + ans;
            count--;
            temp = temp->next;
        }
        return ans;
    }
};