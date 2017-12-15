#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
void append(struct node** head,int data){
  struct node *nn=(struct node *)malloc(sizeof(struct node));
  nn->data = data;
  nn->next = NULL;
  if(*head == NULL){
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
    if(n->data != 0){
      printf("%d",n->data);
    }
    if(n->next != NULL && n->next->next != NULL && n->data!=0){
      printf("-->");
    }
    n=n->next;
  }
  return;
}
void add(struct node **head){
  int c=0;
  struct node *last = *head;
  while(last->next!=NULL){
    if(c%2==0){
      last->data = (last->data)+(last->next->data);
      last->next->data=0;
    }
    c++;
    last=last->next;
  }
}
void main(){
  struct node* head = NULL;
  int n,val;
  printf("enter the number of nodes");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&val);
    append(&head,val);
  }
  add(&head);
  printList(head);
}
