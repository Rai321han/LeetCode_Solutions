#include <iostream>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

class TreeNode {
    public:
     int val;
     TreeNode *left;
     TreeNode *right;

     TreeNode(int value) {
        val = value;
        left = right = nullptr;
     }

    void insertNode(TreeNode* root, int val) {
        TreeNode *node = new TreeNode(val);
        TreeNode *temp;
        queue<TreeNode*>Q;
        Q.push(root);

        while(true) {
            temp = Q.front();
            Q.pop();

            if(!temp->left) {
                temp->left = node;
                return;
            }
            if(!temp->right) {
                temp->right = node;
                return;
            }

            Q.push(temp->left);
            Q.push(temp->right);
        }
    }
 }; 

/////////////////////-------------DFS------------///////////////
// int minDepth(TreeNode* root) {
//     if(!root) return 0;
//     stack<pair<TreeNode*, int>>st;
//     st.push({root,1});
//     int min = INT_MAX;

//     while(!st.empty()) {
//         pair<TreeNode*, int> front = st.top();
//         st.pop();
//         if(front.first->right) st.push({front.first->right, front.second + 1});
//         if(front.first->left) st.push({front.first->left, front.second + 1});
//         if(!front.first->right && !front.first->left && min >= front.second) min = front.second;
//     }
//     return min;
// }


///////////////////-------------BFS------------////////////////
int minDepth(TreeNode* root) {
    if(!root) return 0;
    queue<TreeNode*>Q;
    Q.push(root);
    int min = INT_MAX;
    int level = 1;

    while(!Q.empty()) {       
        for(int i=0; i<Q.size(); i++) {
            TreeNode* temp = Q.front();
            Q.pop();
            if(temp->left) Q.push(temp->left);
            if(temp->right) Q.push(temp->right);
            if(!temp->left && !temp->right && min >= level) min = level;
        }
        level++;
    }
}
