#include <iostream>
#include <queue>

using namespace std;

class TreeNode {
    public:
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

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

void preorder(TreeNode *root) {
    if(!root) return;
    preorder(root->left);
    cout<<root->val<<" ";
    preorder(root->right);
}

///////////////////////OUR MAIN TASK(Recursive)//////////////////////////
bool check(TreeNode *node1, TreeNode *node2) {
    if(!node1 && !node2) return true;
    if(!node1 || !node2) return false;
    if(node1->val != node2->val) return false;

    return check(node1->left, node2->right) && check(node1->right, node2->left);
}

bool isSymmetric(TreeNode* root) {
    return check(root->left,root->right);
}

/////////////////////////Iterative////////////////////////
// bool isSymmetric(TreeNode* root) {
//     if(root->left == nullptr && root->right == nullptr) return true;
//     if(!root->left || !root->right) return false;

//     queue<TreeNode*>Q;

//     Q.push(root->left);
//     Q.push(root->right);

//     TreeNode *Node1;
//     TreeNode *Node2;
//     while(!Q.empty()) {
//         Node1 = Q.front();
//         Q.pop();
//         Node2 = Q.front();
//         Q.pop();

//         if(Node1->val != Node2->val) return false;

//         if(Node1->left && Node2->right) {
//             Q.push(Node1->left);
//             Q.push(Node2->right);
//         }

//         if(Node1->right && Node2->left) {
//             Q.push(Node1->right);
//             Q.push(Node2->left);
//         }

//         if((!Node1->left && !Node2->right) || (!Node1->right && !Node2->left)) continue;

//         if(!Node1->left || !Node2->right) return false;
//         if(!Node1->right || !Node2->left) return false;
//     }
//     return true;
// }

//////////////////////////////////////////////////////////////

int main() {
    int arr[] = {1,2,4,3,4,4,3};
    int n = sizeof arr/sizeof arr[0];
    TreeNode *t = new TreeNode(arr[0]);
    int i=1;

    while(i<n) {
        t->insertNode(t,arr[i]);
        i++;
    }
    
    bool x = isSymmetric(t);
    (x==1)?cout<<"true":cout<<"false";
    return 0;
}