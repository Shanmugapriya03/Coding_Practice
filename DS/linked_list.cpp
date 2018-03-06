#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
class linked_list{
  private :
    node *head,*tail;
  public :
    linked_list(){
      head = NULL;
      tail = NULL;
    }
     //inserting at the back
    void append(int n){
      node *tmp = new node;
      tmp->data=n;
      tmp->next=NULL;

        if(head==NULL){
          head=tmp;
          tail=tmp;
        }else{
          tail->next = tmp;
          tail = tail->next;
        }
    }
    // inserting at the front
    void push(int n){
      node *tmp = new node;
      tmp->data=n;
      if(head!=NULL){
        tmp->next=head;
        head=tmp;
      }else{
        tmp->next = NULL;
        head=tmp;
        tail=tmp;
      }
    }

    // inserting in sorted order
    void insert(int n){
      if(head==NULL){
        node *tmp = new node;
        tmp->data = n;
        head=tmp;
        tail=tmp;
      }
      else if(head->data > n){
        push(n);
      }else if(tail->data < n){
        append(n);
      }else{
        node *curr = head;
        node *nn = new node;
        nn->data = n;
        while(curr->next != NULL && curr->next->data < n){
            curr=curr->next;
        }
        nn->next = curr->next;
        curr->next = nn;
      }

    }
    // deleting all the occurences
    void delete_node(int n){
      node *tmp = head;
      node *track = head;
      node *prev = new node;
        while(tmp != NULL && tmp->data == n){
          head = tmp->next;
          free(tmp);
          tmp = head;
        }
        while(tmp!=NULL){
          while(tmp !=NULL && tmp->data!=n){
            prev=tmp;
            tmp=tmp->next;
          }
          if(tmp == NULL){
            return;
          }
          prev->next = tmp->next;
          free(tmp);

          tmp = prev->next;
        }
    }
    void print_node(){
      node *last = head;
      while(last!=NULL){
        cout<<last->data;
        if(last->next != NULL){
          cout<<"-->";
        }
        last=last->next;
      }
      cout<<endl;
    }
};
int main(){
  linked_list a;
  a.insert(6);
  a.insert(3);
  a.insert(1);
  a.insert(4);
  a.insert(2);
  a.insert(1);
  a.insert(8);
  a.insert(5);
  a.print_node();
  a.delete_node(1);
  a.print_node();
  return 0;
}
