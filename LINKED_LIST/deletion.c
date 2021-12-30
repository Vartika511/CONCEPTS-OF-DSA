//Case 1: Delete node at the beginning --> Time Complxicity Bigo(1)
//Case 2: Delete node in between --> Time Complexcity Bigo(n).
//Case 3: Delete node at the end. --> Time Complexcity Bigo(n).
//Case 4: Delete node after a given value --> Time Complexicity BigO(1).

#include <stdio.h>
#include <stdlib.h>
struct Node{
   int data;
   struct Node* next;
};
void LinkedlistTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr= ptr-> next;
    }
}
//Case 1 
struct Node *deleteAtFirst(struct Node *head){
      struct Node * ptr = head;
      head = head->next;
      free(ptr);
      return head;   
}
//case 2
struct Node *deleteatIndex(struct Node *head,int index){
      struct Node * p = head;
      struct Node * q = head->next;
      int i=0;
      while(i!=index-1){
          p = p->next;
          q = q->next;
          i++;
      }
      p->next=q->next;
      free(q);
      return head;   
}
//Case 3
struct Node *deleteAtLast(struct Node *head){
      struct Node * ptr = head;
      struct Node * q = head->next;
      while(q->next!=NULL){
           ptr = ptr->next;
          q = q->next;
      }
      ptr->next=NULL;
      free(q);
      return head;   
}
//Case 4
struct Node *deleteatValue(struct Node *head,int value){
      struct Node * p = head;
      struct Node * q = head->next;
      while(q->data!=value && q->next!=NULL){
          p = p->next;
          q = q->next;
      }
      if(q->data==value){
      p->next=q->next;
      free(q);}
      return head;   
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    head= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    fourth= (struct Node *)malloc(sizeof(struct Node));
    fifth= (struct Node *)malloc(sizeof(struct Node));
     
    head -> data = 5;
    head -> next = second;
    second-> data = 45;
    second-> next = third;
    third-> data = 78;
    third -> next = fourth;
    fourth-> data = 96;
    fourth-> next = fifth;
    fifth-> data =105 ;
    fifth-> next = NULL;
    printf("Elements Before\n");
    LinkedlistTraversal(head);
    //head= deleteAtFirst(head);
    //head= deleteatIndex(head,2);
    //head= deleteAtLast(head);
    head= deleteatValue(head,96);
    printf("Elements After\n");
    LinkedlistTraversal(head);
    return 0;
}