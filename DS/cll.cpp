#include <iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
class circular_linked_list{
private:
  node *last,*head1,*head2;
public:
  circular_linked_list(){
    last=NULL;
    head1=NULL;
    head2=NULL;
  }

  void addToEmpty(int n){
    // this function is only for list is empty
    if(last != NULL){
      cout<<"list not empty"<<endl;
      return;
    }
    node *tmp = new node;
    tmp->data = n;
    last = tmp;
    last->next=last;
  }

  void addToBegin(int n){
      if(last==NULL){
        addToEmpty(n);
        return;
      }
      node *tmp = new node;
      tmp->data=n;
      tmp->next=last->next;
      last->next=tmp;
  }

  void addToEnd(int n){
    if(last==NULL){
      addToEmpty(n);
      return;
    }
    node *tmp = new node;
    tmp->data=n;
    tmp->next=last->next;
    last->next=tmp;
    last=tmp;
  }
  void add(int n){
    if(last==NULL){
      addToEmpty(n);
      return;
    }
    node *tmp=last->next;
    if(tmp->data > n){
      addToBegin(n);
      return;
    }
    tmp=last;
    if(tmp->data < n){
      addToEnd(n);
      return;
    }
    node * nn = new node;
    nn->data = n;
    while(tmp->next->data < n){
      tmp=tmp->next;
    }
    nn->next = tmp->next;
    tmp->next = nn;

  }

  void splitList(){
    node *head = last->next;
    node *f = head;
    node *s = head;

    while(f->next !=head && f->next->next !=head){
      s=s->next;
      f=f->next->next;
    }
    f->next == head ? f->next=NULL : f->next->next=NULL;
    head1 = head;
    head2 = s->next;
    s->next = NULL;
  }
  void printList(){
    if(last==NULL){
      cout<<"LIST IS EMPTY"<<endl;
      return;
    }
    if(head1==NULL && head2==NULL){
      node *tmp = last->next;
      do{
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }while(tmp!=last->next);

    }else{
      node *tmp = head1;
      do{
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }while(tmp!=NULL);
      cout<<endl;
      tmp = head2;
      do{
        cout<<tmp->data<<" ";
        tmp=tmp->next;
      }while(tmp!=NULL);
    }

  }

};
int main(){
  circular_linked_list c;

  c.add(1);
  c.add(4);
  c.add(7);
  c.add(2);
  c.add(3);
  c.add(5);
  c.add(6);
  c.splitList();
  c.printList();
}
