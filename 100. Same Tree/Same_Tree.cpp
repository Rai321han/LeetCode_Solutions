#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// void preorder(TreeNode *p, vector<int>&arr) {
//     if(p==nullptr) {
//         arr.push_back(INT_MAX);
//     }
//     arr.push_back(p->val);
//     preorder(p->left,arr);
//     preorder(p->right,arr);
//     return;
// }

// bool isSameTree(TreeNode* p, TreeNode* q) {
//     vector<int>arr1;
//     vector<int>arr2;
//     preorder(p, arr1);
//     preorder(q, arr2);
//     int i = 0;
    
//     if(arr1.size() != arr2.size()) return false;
//     while(i<arr1.size()) {
//         if(arr1[i]!=arr2[i]) return false;
//         i++;
//     }
//     return true;
// }

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==nullptr && q==nullptr) return true;
    if(p==nullptr || q==nullptr) return false;
    if(p->val!=q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    
    return 0;
}