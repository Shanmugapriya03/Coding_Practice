#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
void push(struct node **head,int data){
  struct node *nn = (struct node *)malloc(sizeof(struct node));
  nn->data = data;
  nn->next = *head;
  *head = nn;
}
void insertAfter(struct node *prev,int data){
  if(prev == NULL){
    printf(" prev node can not be null");
    return;
  }
  struct node *nn =(struct node *)malloc(sizeof(struct node));
  nn->data=data;
  nn->next = prev->next;
  prev->next = nn;
}
void append(struct node **head,int data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node -> data = data;
  new_node -> next = NULL;
  struct node *last = *head;
  if(*head == NULL){
    *head = new_node;
    return;
  }
  while(last->next != NULL){
    last = last->next;
  }
  last->next = new_node;
  return;
}
void printList(struct node *n){
  while(n != NULL){
    printf("%d",n->data);
    n = n->next;
  }
}
int find(struct node *n,int data){
  while(n != NULL){
    if(n->data == data){
      return 1;
    }
    n = n->next;
  }
  return 0;
}
void main(){
  int ele;
  struct node *head = NULL;
  append(&head,6);
  push(&head,5);
  push(&head,7);
  append(&head,8);
  insertAfter(head->next,4);
  printList(head);
  printf("enter the ele to find");
  scanf("%d",&ele);
  if(find(head,ele)){
    printf("%d found",ele);
  }else{
    printf("not found");
  }
}
