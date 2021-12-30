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

void LinkedlistTraversal(struct Node * head){
    struct Node * ptr=head;
    /*while(ptr->next!=head){
   printf("Element: %d\n", ptr-> data);
   ptr = ptr-> next;}
   printf("Element: %d\n",ptr-> data);*/
  do{
   printf("Element: %d\n", ptr-> data);
   ptr = ptr-> next;}while(ptr!=head);
}
//Case1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr-> data= data;
    struct Node * p= head->next;
    while(p->next !=head){
        p=p->next;
    }
 //At this point p points to the last node of this circular linked list
 p->next=ptr;
 ptr->next=head;
 head=ptr;
 return head;
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
    ptr-> data= data;
    struct Node * p= head->next;
    while(p->next !=head){
        p=p->next;
    }
 //At this point p points to the last node of this circular linked list
 p->next=ptr;
 ptr->next=head;
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
    fourth-> next = head;
    printf("Circular Linked List Before Insertion\n");
    LinkedlistTraversal(head);
    //head = insertAtFirst(head, 2);
    //head = insertAtIndex(head, 24, 2);
    //head= insertAtEnd(head, 39);
    head = insertAfterNode(head,second,88);
    printf("Circular Linked List After Insertion\n");
    LinkedlistTraversal(head); 
    return 0;
}