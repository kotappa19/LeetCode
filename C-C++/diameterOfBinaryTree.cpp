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

    int heightOfBinaryTree(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        return max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right))+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
       if(root == NULL) {
           return 0;
       } 
       int lHeight = heightOfBinaryTree(root->left);
       int rHeight = heightOfBinaryTree(root->right);
       return max(lHeight+rHeight, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }
};
