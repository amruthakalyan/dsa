#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};
node * newNode(int data){
node* new_node =new node();
new_node->data = data;
new_node->left=NULL;
new_node->right=NULL;
return new_node;
}

void levelorder(node* root){
    if(root == NULL)
      return;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
          q.push(temp->left);
           if(temp->right!=NULL)
          q.push(temp->right);
           //spiral traversal (root,right,left)
        //   if(temp->right!=NULL)
        //   q.push(temp->right);
    }
}
int main(){
    node* root=newNode(3);
    root->left = newNode(8);
    root->right = newNode(10);
    root->left->left=newNode(6);
   root->left->right=newNode(5); 
   root->left->right->left=newNode(2); 
   root->left->right->right=newNode(9); 
   root->right->left=newNode(15); 
   levelorder(root);
   return 0;

}