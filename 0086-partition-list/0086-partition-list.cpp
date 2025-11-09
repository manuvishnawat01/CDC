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
class Solution{
public:
    ListNode* partition(ListNode* head, int x){
        vector<int> smaller;
        vector<int> larger;

        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x)
                smaller.push_back(temp->val);
            else
                larger.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> result;
        for(int num : smaller)
            result.push_back(num);
        for(int num : larger)
            result.push_back(num);

        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        for(int val : result){

            if(newHead == NULL){
                newHead = new ListNode(val);
                tail = newHead;
            }
            else{
                tail->next =  new ListNode(val);
                tail = tail->next;   
            }
        }
        return newHead;
    }
};
