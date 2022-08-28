#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

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

// pair<bool,int> check(TreeNode* root) {
//     bool balance = false;
//     int height;

//     if(!root) return {true,0};
//     pair<bool, int> left = check(root->left);
//     pair<bool, int> right = check(root->right);

//     if(left.first && right.first && (abs(left.second - right.second) <= 1)) balance = true;
//     else balance = false;

//     height = max(left.second, right.second) + 1;
//     return {balance,height};
// }

// bool isBalanced(TreeNode* root) {
//     pair<bool, int>ReturnPair = check(root);
//     return ReturnPair.first;
// }

int check(TreeNode* root) {
    int left,right;
    if(!root) return 0;

    left = check(root->left);
    right = check(root->right);

    if(left==-1 || right==-1) return -1;
    if(abs(left-right)>1) return -1;
    return max(left,right)+1;
}

bool isBalanced(TreeNode* root) {
    return (check(root)==-1)?false:true;
}

