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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* node = new ListNode;
        ListNode *p=node ,*r=l1,*l=l2;
        int rem=0;
        int ad;
        while(r && l)
        {
            ListNode* temp = new ListNode;
            p->next=temp;
            p=temp;
            ad=r->val+l->val+rem;
            p->val=(ad)%10;
            rem=ad/10;
            r=r->next;
            l=l->next;
        }
        while(r)
        {
            ListNode* temp = new ListNode;
            p->next=temp;
            p=temp;
            ad=r->val+rem;
            p->val=ad%10;
            rem=ad/10;
            r=r->next;
        }
        while(l)
        {
            ListNode* temp = new ListNode;
            p->next=temp;
            p=temp;
            ad=l->val+rem;
            p->val=ad%10;
            rem=ad/10;
            l=l->next;
        }
        if(rem!=0)
        {
            ListNode* temp = new ListNode;
            p->next=temp;
            p=temp;
            p->val=rem;
        }
        p->next=NULL;
        node=node->next;
        return node;
    }
};