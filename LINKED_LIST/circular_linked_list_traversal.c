//The complexcity of traversal is BigO(n).

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
int main()
{
struct Node * head;
struct Node * second;
struct Node * third;
struct Node * forth;
//Allocate memory for nodes in the linked list in heap
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
forth = (struct Node*)malloc(sizeof(struct Node));
//Linked first and second node
head-> data = 7;
head -> next = second;
//Linked second and third node
second-> data = 45;
second-> next = third;
//Linked third and forth node
third-> data = 78;
third -> next = forth;
//Linked forth and last node
forth-> data = 96;
forth-> next = head;

LinkedlistTraversal(head);
return 0;
}