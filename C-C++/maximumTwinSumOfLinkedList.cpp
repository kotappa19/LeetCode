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
        vector<int> res;
        ListNode* ptr = head;
        while(ptr) {
            res.push_back(ptr->val);
            ptr = ptr->next;
        }
        int ans = res[0] + res[res.size()-1];
        for(int i = 1; i < res.size()/2; i++) {
            if(ans < res[i] + res[res.size()-1-i]) {
                ans = res[i] + res[res.size()-1-i];
            }
        }
        return ans;
    }
};
