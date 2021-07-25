#include<bits/stdc++.h>
using namespace std;
struct treenode{
    int val;
    struct treenode *left;
    struct treenode *right;

    treenode(int data){
        val=data;
        left=right=NULL;

    }
};
void preorder(treenode*root){
    if(!root) return;
    vector<int>v;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void innorder(treenode*root){
    if(!root) return;
    vector<int>v;
    
    innorder(root->left);
    cout<<root->val<<" ";
    innorder(root->right);
    
}
void postorder(treenode*root){
    if(!root) return;
    vector<int>v;
   
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main(){
treenode * root=new treenode(12);
root->left=new treenode(20);
root->right=new treenode(10);
root->left->left=new treenode(11);
root->left->right=new treenode(17);
root->right->left=new treenode(15);
root->right->right=new treenode(18);
cout<<"preorder:";
preorder(root);
cout<<" inorder :";
innorder(root);
cout<<"postorder :";
postorder(root);
return 0;
}