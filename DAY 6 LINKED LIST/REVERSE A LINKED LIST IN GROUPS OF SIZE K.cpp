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
    ListNode* reverseList(ListNode* head,int k) {
        if(!head)
        {
            return head;
        }
        ListNode *p,*r,*l;
        p=head->next;
        r=head;
        l=NULL;
        while(p && k--) 
        {
            r->next=l;
            l=r;
            r=p;     
            p=p->next;
        }
        r->next=l;
        head->next=p;
        return r;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *p=head,*prev,*l=head,*main;
        if(k==1) return head;
        main=reverseList(p,k-1);
        p=main;
        for(int i=0;i<k;++i)
        {
            prev=p;
            if(!p->next) goto end;
            p=p->next;
        }
        l=p;
        
        while(l)
        { 
            l=p;
            for(int i=0;i<k;++i)
            {
                if(!l) goto end;
                l=l->next;
            }
            prev->next=reverseList(p,k-1);
            prev=p;
            p=p->next;         
          // cout<<prev->val<<" "<<p->val<<"\n";
        }
        end:
        return main;
        
    }
};