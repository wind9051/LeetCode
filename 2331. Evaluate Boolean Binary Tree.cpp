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
    bool DFS(TreeNode* T) {
        //if (!T) return true;
        if (T->val == 0 || T->val == 1) return T->val == 1;
        if (T->val == 2) return DFS(T->left) || DFS(T->right);
        if (T->val == 3) return DFS(T->left) && DFS(T->right);

        return false;
    }

    bool evaluateTree(TreeNode* root) {
        return DFS(root);
    }
};
