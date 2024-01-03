#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
};
node* newnode(int data){
    node* new_node = new node();
  new_node->data=data;
  new_node->left=NULL;
    new_node->right=NULL;
}
void inorder(node* root){
    if(root==NULL)
      return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);  
        
}
node* bst(node* root,int val){
   int data = val;
    if(root==NULL)
    return newnode(val);
   if(val<root->data){
    root->left = bst(root->left ,val);
   }
   if(val>root->data){
    root->right = bst(root->right ,val);
   }
}
int main(){
  node * root =NULL;
  root=bst(root,5);
  root=bst(root,6);
  root=bst(root,7);
  root=bst(root,12);
  root=bst(root,15);
  root=bst(root,16);
  cout<<"Inorder is:"<<endl;
  inorder(root);
}