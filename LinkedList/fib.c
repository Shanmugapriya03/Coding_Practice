#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
void append(struct node **head,int data){
  struct node *nn = (struct node *)malloc(sizeof(struct node));
  nn->data=data;
  nn->next=NULL;
  if(*head==NULL){
    *head = nn;
    return;
  }
  struct node *last = *head;
  while(last->next != NULL){
    last = last->next;
  }
  last->next = nn;
  return;
}
void printList(struct node *n){
  while(n != NULL){
    printf("%d",n->data);
    if(n->next != NULL){
      printf("-->");
    }
    n=n->next;
  }
  return;
}
void fib(struct node**head,int n){
  int f[n];
  f[0]=0;
  f[1]=1;
  append(head,f[0]);
  append(head,f[1]);
  for(int i=2;i<n;i++){
    f[i]=f[i-1]+f[i-2];
    append(head,f[i]);
  }
}
void main(){
  struct node* head = NULL;
  int n;
  scanf("%d",&n);
  fib(&head,n);
  printList(head);
}
