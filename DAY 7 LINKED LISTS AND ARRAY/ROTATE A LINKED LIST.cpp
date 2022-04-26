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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode *p,*t,*prev,*nhead;
        t=head;
        p=head;
        int ctr=0;
        while(p)
        {
            p=p->next;
            ctr++;
        }
        p=head;
        int x=k%ctr;
        if(x==0) return head;
        while(x--)
        {
            p=p->next;
        }
        while(p)
        {
            prev=t;
            p=p->next;
            t=t->next;
        }
        nhead=t;
        while(t->next)
        {
            t=t->next;
        }
        t->next=head;
        prev->next=NULL;
        return nhead;
    }
};