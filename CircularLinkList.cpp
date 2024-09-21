#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node *makeNode(int x){
    node* tmp=new node;
    tmp->data=x;
    tmp->next=tmp;
    return tmp;
}
node* addTail(node* l,int x){
    node* tmp=new node;
    tmp->data=x;
    node* p = l;
    while(p->next!=l){
        p=p->next;
    }
    tmp->next=l;
    p->next=tmp;
    return l;
}
void printList(node* l){
    node* p =l->next;
    cout<<l->data<<" ";
    while(p!=l){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void printListk(node* l,int k){
    node* p=l;
    for(int i=0;i<k;i++)
        p=p->next;
    cout<<p->data<<" ";
    node* tmp=p->next;
    while(tmp!=p){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
int main(){
    node* l=new node;
    int n,x;
    cin>>n>>x;
    l=makeNode(x);
    for(int i=1;i<n;i++){
        cin>>x;
        l=addTail(l,x);
    }
    int k;
    cin>>k;
    printListk(l,k);
}