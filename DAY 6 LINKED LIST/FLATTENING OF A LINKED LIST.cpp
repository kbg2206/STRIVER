// { Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}
// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node* mergeTwoLists(Node* list1, Node* list2) {
        Node *mainhead =new Node(-1);
        Node *l1,*l2,*p;
        l1=list1;
        l2=list2;
        if(!list1 && !list2) return NULL;
        else if(!list1) return list2;
        else if(!list2) return list1;
        p=mainhead;
        while(l1 && l2)
        {
            if(l1->data<=l2->data)
            {
                p->bottom=l1;
                p=l1;
                l1=l1->bottom;
            }
            else
            {
                p->bottom=l2;
                p=l2;
                l2=l2->bottom;
                
            }
        }
        if(!l2) p->bottom=l1;
        else p->bottom=l2;
        
        mainhead=mainhead->bottom;
        return mainhead;
    }


Node *flatten(Node *root)
{
   // Your code here
   Node *p=root;
   int ctr=0;
   while(p)
   {
       p=p->next;
       ctr++;
   }
// root=mergeTwoLists(root,root->next);
   for(int i=2;i<=ctr;++i)
   {
       p=mergeTwoLists(root,root->next);
       p->next=root->next->next;
       root=p;
       
   }
   return root;
}

