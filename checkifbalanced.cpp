int solve(Node*root, int &f){
    if(!root) return 0;
    int l=solve(root->left,f);
    int r=solve(root->right,f);
    if(abs(l-r)>1)
    f=0;
return (1+max(l,r));
}
//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    int f=1;
    solve(root,f);
    return f;
}
