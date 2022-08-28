
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


TreeNode* makeBST(vector<int>& nums, int low, int high) {
    
    if(low>high) return nullptr;
    TreeNode* root;
    int mid = (low+high)/2;
    root = new TreeNode(nums[mid]);
    root->left = makeBST(nums, low, mid-1);
    root->right = makeBST(nums, mid+1, high);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    int high = nums.size()-1;
    return makeBST(nums, 0, high);
}

int main() {
    
    return 0;
}



