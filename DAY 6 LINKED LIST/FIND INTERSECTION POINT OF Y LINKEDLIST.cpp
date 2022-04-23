/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1,*p2;
        p1=headA;
        p2=headB;
        int x,ctr1=0,ctr2=0;
        while(p1)
        {
            ctr1++;
            p1=p1->next;
        }
        while(p2)
        {
            ctr2++;
            p2=p2->next;
        }
        p1=headA;
        p2=headB;
        if(ctr1>ctr2)
        {
            x=ctr1-ctr2;
            while(x--)
            {
                p1=p1->next;
            }
        }
        else
        {
            x=ctr2-ctr1;
            while(x--)
            {
                p2=p2->next;
            }
        }
        //cout<<ctr1<<" "<<ctr2<<" "<<x<<" \n";
        while(p1 && p2)
        {
            if(p1==p2) return p1;
            p1=p1->next;
            p2=p2->next;
        }
        return NULL;
        
    }
};