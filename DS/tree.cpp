#include <iostream>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
class tree{
public:
  struct node *newNode(int n){

    node *nn=new node;
    nn->data=n;
    nn->left=NULL;
    nn->right=NULL;
    return (nn);
  }
  void preOrder(struct node *nn){
    if(nn==NULL) return;

    cout<<nn->data<<" ";

    preOrder(nn->left);

    preOrder(nn->right);
  }
  void inOrder(struct node *nn){
    if(nn==NULL) return;
    inOrder(nn->left);

    cout<<nn->data<<" ";

    inOrder(nn->right);
  }
  void postOrder(struct node *nn){
    if(nn==NULL) return;
    postOrder(nn->left);

    postOrder(nn->right);

    cout<<nn->data<<" ";
  }
};
int main(){
  tree t;
  struct node * root = t.newNode(1);
  root->left = t.newNode(2);
  root->right = t.newNode(3);
  root->left->left = t.newNode(4);
  root->left->right = t.newNode(5);
  t.preOrder(root);
  cout<<endl;
  t.inOrder(root);
  cout<<endl;
  t.postOrder(root);

}
