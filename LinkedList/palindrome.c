#include<stdio.h>
#include<stdlib.h>
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
int calcTens(int n){
  int tot=1;
  for(int i=0;i<n;i++){
    tot*=10;
  }
  return tot;
}
int patching(struct node *head,int n){
  int val,num=0;
  val=calcTens(n);
  while(head != NULL){
      val=val/10;
      num+=((head->data)*(val));
      head=head->next;
  }
  return num;
}
int reversing(int original,int n){
  int rev=0,val;
  val=calcTens(n);
  while(original>0){
    val=val/10;
    rev+=(original%10)*val;
    original=original/10;
  }
  return rev;
}
void main(){
  struct node *head =NULL;
  int n,val,num1,num2;
  printf("enter the numer of nodes in linked list");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&val);
    append(&head,val);
  }
  num1=patching(head,n);
  num2=reversing(num1,n);

  if(num1 == num2){
    printf("Palindrome");
  }else{
    printf("Not Palindrome");
  }
}
