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
        if(!head->next) return head;
        ListNode *p=head;
        int ctr=0;
        while(p)
        {
            ctr++;
            p=p->next;
        }
        p=head;
        ctr=ctr/2;
        while(ctr--)
        {
            p=p->next;
        }
        return p;
        
    }
};