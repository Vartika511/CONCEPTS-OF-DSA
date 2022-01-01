#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1; //True- Yes it is empty.
    }
    else{
        return 0;  //False - Its not empty.
    }
}
int isFull(struct stack*ptr){
    if(ptr->top==(ptr->size -1)){
        return 1; //True - Yes it is full.
    }
    else{
        return 0; //false - Its nott full
    }
}
void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("Stack OverFlow can not %d to  the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= val;
    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack is underflow");
        return-1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val; }
}

int peek(struct stack *ptr, int i){
    int arrayInd = ptr->top-i+1;
       if(arrayInd<0){
           printf("Invalid position");
           return -1;
       }
       else{
           return ptr->arr[arrayInd];
       }
}

int main()
{
    struct stack *s= ( struct stack*) malloc (sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    push(s,57);
    push(s,58);
    push(s,59);
    push(s,60);
    push(s,61);
    push(s,62);
    push(s,63);
    push(s,64);
    push(s,65);
    push(s,66);
    for(int i=1;i<=s->top+1;i++){
    printf("The value at position %d is %d\n",i,peek(s,i));
    }
    return 0;
}