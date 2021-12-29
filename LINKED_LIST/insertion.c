//Case 1: Insert at the beginning --> Time Complexicity BigO(1).
//Case 2: Insert in between --> Time Complexcity Bigo(n).
//Case 3: Insert at the end. --> Time Complexcity Bigo(n).
//Case 4: Insert after a node --> Time Complexicity BigO(1).
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

void LinkedlistTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr= ptr-> next;
    }
}
//Case1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next= head;
    ptr-> data= data;
    return ptr;

}
//Case2
struct Node * insertAtIndex(struct Node *head, int data,int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node * p = head;
    int i=0;
    while (i!=index-1)
    {
         p=p->next;
         i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
//Case 3 
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node * p = head;
    while (p->next!=NULL)
    {
         p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//Case 4
struct Node * insertAfterNode(struct Node *head,struct Node * preNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    ptr-> data = data;
    ptr->next= preNode->next;
    preNode->next=ptr;
    return head;
}


int main()
{
      struct Node * head;
      struct Node * second;
      struct Node * third;
      struct Node * fourth;

      head= (struct Node *)malloc(sizeof(struct Node));
      second= (struct Node *)malloc(sizeof(struct Node));
      third= (struct Node *)malloc(sizeof(struct Node));
      fourth= (struct Node *)malloc(sizeof(struct Node));

    head -> data = 5;
    head -> next = second;
    head-> data = 7;
    second-> data = 45;
    second-> next = third;
    third-> data = 78;
    third -> next = fourth;
    fourth-> data = 96;
    fourth-> next = NULL;
    
    LinkedlistTraversal(head);
    //head = insertAtFirst(head, 2);
    //head = insertAtIndex(head, 24, 2);
    //head= insertAtEnd(head, 39);
    head = insertAfterNode(head,second,88);
    LinkedlistTraversal(head); 
    return 0;
}