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
    ListNode* middleNode(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL) {
            prev = prev->next;
            curr = curr->next->next;
        }
        return prev;
    }
};
