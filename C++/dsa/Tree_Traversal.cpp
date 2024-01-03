#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left=NULL;
    Node* right=NULL;
};
Node* newNode(int data){
  Node* root=new Node();
  root->data=data;
  root->left=NULL;
  root->right=NULL;   
  return root;
}
void preorder(Node* root){
    if(root==NULL)
      return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);  
}
void inorder(Node* root){
    if(root==NULL)
      return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);  
        
}
void postorder(Node* root){
    if(root==NULL)
      return;
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";  
        
}
void levelorder(Node* root){
  if(root==NULL)
    return;
  queue<Node*>q;
  q.push(root);
  while(q.empty()==false){
    Node* temp = q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left!=NULL)
    q.push(temp->left);
     if(temp->right!=NULL)
    q.push(temp->right);

  }
}
int main(){
 Node* root=newNode(3);
    root->left = newNode(8);
    root->right = newNode(10);
    root->left->left=newNode(6);
   root->left->right=newNode(5); 
   root->left->right->left=newNode(2); 
   root->left->right->right=newNode(9); 
   root->right->left=newNode(15); 
  cout<<"Pre-order is:\n";
  preorder(root);
   cout<<"\n";
  cout<<"In-order is:\n";
   inorder(root);
   cout<<"\n";
   cout<<"Post-order is:\n";
   postorder(root);
    cout<<"\n";
    cout<<"Level-order is:\n";
   levelorder(root);
   return 0;
}


