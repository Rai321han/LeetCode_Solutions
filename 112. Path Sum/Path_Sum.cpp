#include <iostream>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



int sumup(TreeNode *root, int target) {
    if(!root) return 0;
    target -= root->val;
    if(target == 0 && !root->left && !root->right) return 1;
    int left = sumup(root->left,target);
    int right = sumup(root->right,target);

    if(left == 1 || right == 1) return 1;
    else return 0;
}

bool hasPathSum(TreeNode* root, int targetSum) {
   return (sumup(root,targetSum) == 0)?false:true;
}