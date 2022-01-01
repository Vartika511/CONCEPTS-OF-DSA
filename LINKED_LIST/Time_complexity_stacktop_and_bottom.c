//Time Complexcity of Push Operatio --> BigO(1).
//Time Complexcity of Pop Operatio --> BigO(1).
//Time Complexcity of Peek Operatio --> BigO(1).
//Time Complexcity of isEmpty Operatio --> Big)(1).
//Time Complexcity of isFull Operatio --> BigO(1).
//Time Complexcity of stackTop Operatio --> BigO(1).
//Time Complexcity of stack Bottom Operatio --> BigO(1).
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
int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr){
    return ptr->arr[0];
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
    printf("The top most value of this stack is %d\n", stackTop(s));
    printf("The bottom most value of this stack is %d", stackBottom(s));
    return 0;
}