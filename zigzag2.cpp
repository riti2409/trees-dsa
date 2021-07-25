vector <int> zigZagTraversal(Node* root)
{
    vector<int>ans;
	if(!root){
	    return ans;
	}
	queue<Node*>q;
	q.push(root);
	int level=1;
	while(!q.empty()){
	    int sz=q.size();
	    
	    vector<int>t;
	    while(sz--){
	        Node*temp=q.front();
	        t.push_back(temp->data);
	        if(temp->left) q.push(temp->left);
	        if(temp->right) q.push(temp->right);
	        q.pop();
	    }
	    if(level%2==0)
	    reverse(t.begin(),t.end());
	    for(int i=0;i<t.size();i++)
	    ans.push_back(t[i]);
	    level=!level;
	}
	return ans;
}