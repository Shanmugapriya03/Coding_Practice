#include<iostream>
#include<fstream>
#include<map>
using namespace std;
struct node{
  string data;
  struct node *next;
};
void append(struct node **head,string data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node -> data = data;
  new_node -> next = NULL;
  struct node *last = *head;
  if(*head == NULL){
    *head = new_node;
    return;
  }
  while(last -> next != NULL){
    last = last->next;
  }
  last->next = new_node;
  return;
}
void printList(struct node *n){
  while(n != NULL){
    cout<<n->data<<endl;
    n=n->next;
  }
}
int main(){
  struct node * head = NULL;
  string content;
  //to read a file
  ifstream infile;
  //opening a file
  infile.open("file.txt");

   cout << "Reading from the file" << endl;
   //loops until full all words in file are read
   while(infile>>content){
     append(&head,content);
   }
   printList(head);
  return 0;
}
