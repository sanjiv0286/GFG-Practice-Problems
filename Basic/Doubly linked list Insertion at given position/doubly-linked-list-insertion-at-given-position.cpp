//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
      data = x;
      next = prev = NULL;
  }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *n = new Node(x);
    
    head->next = n;
    n->prev = head;
    head = n;
    return head;
}

void printList(Node *head)
{
  // The purpose of below two loops is
  // to test the created DLL
  Node *temp=head;
  if (temp != NULL) {
    int ct1=0,ct2=0;
  while (temp->next!=NULL)
    temp=temp->next,ct1++;
  while (temp->prev!=NULL)
   temp = temp->prev,ct2++;
   if(ct1!=ct2){
       cout<<-1<<"\n";
       return;
   }
  }
  while (temp != NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  
  cout << endl;
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  Node *head = NULL; 
  Node *root = NULL;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     int x;
     scanf("%d",&x);
     head = insert(head, x);
     if(root==NULL) root = head;
  }     
  head = root;
  int pos,data;
  cin>>pos>>data;
  addNode(head, pos, data);
  printList(head);
  }
  return 0;
}
// } Driver Code Ends


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
// void addNode(Node *head, int pos, int data)
// {
//   Node *curr = head;
   
//   int i=0;
//   while(i!=pos){
//       curr = curr->next;
//       i++;
//   }
//   Node *newnode = new Node(data);
//   curr->next = newnode;
//   newnode->prev = curr;
//   if(curr->next!=NULL) {
//       curr->next->prev=newnode;
//     curr->next=newnode;
//   }
  
// // if (curr->next->next != nullptr) {
// //     newnode->next = curr->next->next;
// //     curr->next->next->prev = newnode;
// // }

// //   Node* x = new Node(data);
// //     Node* temp = head;
    
// //     while(pos--){
// //         temp = temp ->next;
// //     }
// //     x->next=temp->next;
// //     x->prev = temp ;
// //   if(temp->next!=NULL) 
// //   temp->next->prev=x;
// //     temp->next=x;

// }



void addNode(Node *head, int pos, int data) {
    Node *curr = head;
    int i = 0;
    
    // Find the node at position pos-1
    while (curr != nullptr && i < pos ) {
        curr = curr->next;
        i++;
    }
    
    // If the position is out of bounds, or the head is nullptr
    if (curr == nullptr) {
        std::cout << "Position out of bounds" << std::endl;
        return;
    }
    
    // Create a new node
    Node *newNode = new Node(data);
    
    // Insert the new node after curr
    newNode->next = curr->next;
    if (curr->next != nullptr) {
        curr->next->prev = newNode;
    }
    curr->next = newNode;
    newNode->prev = curr;
}
