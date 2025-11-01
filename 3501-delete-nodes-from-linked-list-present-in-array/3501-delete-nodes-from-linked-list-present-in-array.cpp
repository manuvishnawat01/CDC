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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s(nums.begin(), nums.end());

        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = head;
        ListNode* prev = temp;

        while (curr != NULL) {
            if (s.count(curr->val)) {
                prev->next = curr->next; // remove node
            } else {
                prev = curr; // keep node
            }
            curr = curr->next;
        }
        return temp->next;
    }
};