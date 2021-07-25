#include <bits/stdc++.h>
using namespace std;
struct treenode
{
    int val;
    struct treenode *left;
    struct treenode *right;

    treenode(int data)
    {
        val = data;
        left = right = NULL;
    }
};
void levelorder(treenode *root)
{
    vector<int> vec;
    if (!root)
        return;

    queue<treenode *> q;
    q.push(root);
    while (!q.empty())
    {
        treenode *temp = q.front();
        vec.push_back(temp->val);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
        q.pop();
    }
    for (auto x : vec)
    {
        cout << x << "->";
    }
}
   
    int main()
    {
        treenode *root = new treenode(12);
        root->left = new treenode(20);
        root->right = new treenode(10);
        root->left->left = new treenode(11);
        root->left->right = new treenode(17);
        root->right->left = new treenode(15);
        root->right->right = new treenode(18);
        cout << "level order:";
        levelorder(root);
        
        return 0;
    }