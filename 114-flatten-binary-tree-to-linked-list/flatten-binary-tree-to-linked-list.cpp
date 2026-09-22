/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* f(TreeNode* root)
    {
        if(root==nullptr) return nullptr;

        TreeNode* leftTail = f(root->left);
        TreeNode* rightTail = f(root->right);

        if(root->left!=nullptr)
        {
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = nullptr;

            leftTail->right = temp;
        }

        if(rightTail!=nullptr) return rightTail;
        if(leftTail!=nullptr) return leftTail;

        return root;
    }
    void flatten(TreeNode* root) {
        
        f(root);
    }
};