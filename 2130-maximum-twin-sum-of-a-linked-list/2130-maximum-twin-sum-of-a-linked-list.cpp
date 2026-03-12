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
    int pairSum(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }

        count = count/2;
        int middle = count;
        ListNode* head2 = head;
        while(middle--){
            head2 = head2->next;
        }

    ListNode* prev = nullptr;
    ListNode* current = head2;
    ListNode* next = nullptr; 

    while (current != nullptr) {
        next = current->next;
        current->next = prev; 
        prev = current;      
        current = next;   
    }
    head2 = prev;


    int sum = 0;
        while(head2 != NULL){
            int curr = head->val + head2->val;
            sum = max(sum,curr);
            head = head->next;
            head2 = head2->next;
        }
        return sum;
    }
};