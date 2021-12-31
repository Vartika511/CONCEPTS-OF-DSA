#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
};

void Traversal(struct Node * head){
    struct Node * ptr=head;
    while(ptr->next!=NULL){
        printf("Elements in order %d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("Element in order %d\n", ptr->data);
    while(ptr!=NULL){
        printf("Elements in reverse order %d\n", ptr->data);
        ptr=ptr->prev;
    }

}
int main()
{   //Creating Nodes
    struct Node * head=(struct Node *)malloc(sizeof(struct Node));  
    struct Node * second=(struct Node *)malloc(sizeof(struct Node));  
    struct Node * third=(struct Node *)malloc(sizeof(struct Node));  
    struct Node * fourth=(struct Node *)malloc(sizeof(struct Node));  
    struct Node * fifth=(struct Node *)malloc(sizeof(struct Node)); 

    //Link Nodes
    head->prev=NULL;
    head->data = 7;
    head->next=second;

    second->prev=head;
    second->data = 12;
    second->next=third;
    
    third->prev=second;
    third->data = 24;
    third->next=fourth;

    fourth->prev=third;
    fourth->data = 36;
    fourth->next=fifth;

    fifth->prev=fourth;
    fifth->data = 48;
    fifth->next=NULL;
    Traversal(head);
    return 0;
}