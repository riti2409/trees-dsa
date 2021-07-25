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
void reverselevelorder(treenode * root){  
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
        reverse(vec.begin(),vec.end());
        for(auto &x : vec)
        {
            cout << x << "->";
        }
}

 int main()
    {
        treenode *root = new treenode(1);
        root->left = new treenode(2);
        root->right = new treenode(3);
        root->left->left = new treenode(4);
        root->left->right = new treenode(5);
        root->right->left = new treenode(6);
        root->right->right = new treenode(7);
        cout << "reverselevel order:";
        reverselevelorder(root);
        
        return 0;
    }
