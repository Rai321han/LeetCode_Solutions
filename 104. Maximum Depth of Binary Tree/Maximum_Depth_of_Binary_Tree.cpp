//Recursive

// int maxDepth(TreeNode* root) {
//     if(!root) return 0;
//     return 1 + max(maxDepth(root->left), maxDepth(root->right));        
// }


//BFS 

int maxDepth(TreeNode* root) {
    if(!root) return 0;

    queue<TreeNode*>Q;
    Q.push(root);
    int level = 0;
    
    while(!Q.empty()) {
        int n = Q.size();
        fot(int i=0; i<n; i++) {
           root = Q.front();
           Q.pop();

           if(root->left) {
            Q.push(root->left);
           }           
           if(temp->right) {
            Q.push(root->right);
           }
        }
        level++;
    }
    return level;        
}
