void getverticalorder(Node*root,int hd,map<int,vector<int>>&m){
        if(!root) return;
        
        m[hd].push_back(root->data);
        if(root->left) getverticalorder(root->left,hd-1,m);
        if(root->right) getverticalorder(root->right,hd+1,m);
        
    }
    vector<int> verticalOrder(Node *root)
    {
        map<int,vector<int>> m;
        int hd=0;
        vector<int>vec;
        getverticalorder(root,hd,m);
        for(auto x:m){
            for(auto y:x.second){
                vec.push_back(y);
            }
           
        }
         return vec;
}