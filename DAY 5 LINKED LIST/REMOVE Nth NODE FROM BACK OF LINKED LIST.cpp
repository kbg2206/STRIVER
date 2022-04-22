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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p,*h;
        p=head;
        h=head;
        if(!head->next)
        {
            head=NULL;
            return head;
        }
        
        int x=n;
        while(x--){
            p=p->next;
        }
        if(!p)
        {
            head=head->next;
            return head;
        }
        while(p->next)
        {
            h=h->next;
            p=p->next;
        }
        if(n==1) h->next=NULL;
        else h->next=h->next->next;
        return head;
    }
};