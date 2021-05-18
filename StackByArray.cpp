#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int *s;
};

void create(Stack *st){
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
    for(int i=0;i<st->size;i++){
        cin>>st->s[i];
        st->top++;
    }
}

void push(Stack *st,int x)
{
    if(st->top==st->size-1){
        cout<<"Stack is full "<<endl;
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(Stack *st){
    if(st->top==-1){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        st->top--;
    }
}

void display(Stack *st){
    for(int i=0;i<=st->top;i++){
        cout<<st->s[i];
    }
    cout<<endl;
}

int main()
{
    class Stack st;
    create(&st);
    display(&st);
    pop(&st);
    display(&st);
    push(&st,6);
    display(&st);
    
    return 0;
}