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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *mainhead=new ListNode;
        ListNode *l1,*l2,*p;
        l1=list1;
        l2=list2;
        if(!list1 && !list2) return NULL;
        else if(!list1) return list2;
        else if(!list2) return list1;
        p=mainhead;
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {
                p->next=l1;
                p=l1;
                l1=l1->next;
            }
            else
            {
                p->next=l2;
                p=l2;
                l2=l2->next;
                
            }
        }
        if(!l2) p->next=l1;
        else p->next=l2;
        
        mainhead=mainhead->next;
        return mainhead;
    }
};