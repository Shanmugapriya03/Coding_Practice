#include<iostream>
#include<fstream>
#include<map>
using namespace std;
struct node{
  string data;
  struct node *next;
};
class linked_list{
private:
  node *head;
public:
  linked_list(){
    head = NULL;
  }
  void append(string data){
    node *nn = new node;
    nn -> data = data;
    nn -> next = NULL;

    node *last = head;
    if(head == NULL){
      head = nn;
      return;
    }

    while(last -> next != NULL){
      last=last->next;
    }
    last->next=nn;
    return;
  }
  void printList(){
    node *n = new node;
    n=head;
    while(n!=NULL){
      cout<< n->data<<endl;
      n=n->next;
    }
  }
};

int main(){
  linked_list a;
  string content;
  //to read a file
  ifstream infile;
  //opening a file
  infile.open("file.txt");

   cout << "Reading from the file" << endl;
   //loops until full all words in file are read
   while(infile>>content){
     a.append(content);
   }
   a.printList();
  return 0;
}
