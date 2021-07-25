#include <bits/stdc++.h>
using namespace std;
struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;

    treenode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void zigzagtraversal(treenode * root){  
    vector<int> vec;
    vector<vector<int>>sol;
        if (!root)
            return;

        stack<treenode*>st1;
        stack<treenode*>st2;

        st1.push(root);
        while(!st1.empty() || !st2.empty()){
           while(!st1.empty()){
            treenode*temp=st1.top();
            vec.push_back(temp->data);
            if(root->left) st2.push(root->left);
            if(root->right) st2.push(root->right);
            st1.pop();
           }
           if(vec.size()!=0){
               sol.push_back(vec);
               vec.clear();

           }
           while(!st2.empty()){
          treenode*temp=st2.top();
            vec.push_back(temp->data);
            if(root->left) st1.push(root->left);
            if(root->right) st1.push(root->right);
            st2.pop();
           }
           if(vec.size()!=0){
               sol.push_back(vec);
               vec.clear();
               
           }
        }

        for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
        {
            cout << sol[i][j] << " ";
        }   
       
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
        cout << "zigzag:";
        zigzagtraversal(root);
        
        return 0;
    }
