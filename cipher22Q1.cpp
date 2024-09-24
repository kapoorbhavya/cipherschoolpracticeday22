#include<iostream>
using namespace std;
int top=-1;
void push(int stack[],int val,int size){
    if(top==size-1){
        cout<<"Stack Overflow";
    }
    top++;
    stack[top]=val;
}
void pop(int stack[],int size){
    if(top==-1){
        cout<<"Stack underflow";
    }
    cout<<"Deleted element is: "<<stack[top];
    top--;
}
void display(int stack[],int size){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            cout<< stack[i] <<" ";
        }
    }
}
int main(){
    int size;
    cin>>size;
    int stack[size];

    int n,val;
    while(1){
        cin>>n;
        if(n==1){
            cin>>val;
            push(stack,val,size);
        }
        if(n==2){
            pop(stack,size);
        }
        if(n==3){
            display(stack,size);
        }
        if(n==4){
            exit(0);
        }
    }
}