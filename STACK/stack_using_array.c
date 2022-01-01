/* Stack is a linera data structuer operations on stack are
performed in LIFO(lat In First Out)
A Stack is a collection of elements with certain operation following 
LIFO disciplane. A stack can be implemented using an array or a linked list.
STACK ABSTRACT DATA TYPE 
1. push()--> push an element into the stack.
2. pop()--> remove the topmos element from .
3. peek(index)--> value at a given position is returned.
4. isEmpty/isFull --> determine whether the stack is empty or Full.
*/
#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack*ptr){
    if(ptr->top==(ptr->size -1)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    struct stack *s;
    s->size=2;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    
    s->arr[0]=4;
    s->top++;
    // s->arr[1]=3;
    // s->top++;
    //Check if stack is empty
    if(isFull(s)==1){
        printf("The stack is Full");
    }
    else{
        printf("The stack is not Full");
    }
    return 0;
}