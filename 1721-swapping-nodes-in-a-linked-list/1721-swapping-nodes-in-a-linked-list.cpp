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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();

        swap(arr[k-1],arr[n-k]);

        ListNode* head1 = NULL;
        ListNode* tail = NULL;
        for(int i = 0; i < n; i++){
            ListNode* node = new ListNode(arr[i]);
            if(head1 == NULL){
                head1 = node;
                tail = node;
            } 
            else{
                tail->next = node;
                tail = node;
            }
        }
    return head1;
    }
};