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

return 0;
}