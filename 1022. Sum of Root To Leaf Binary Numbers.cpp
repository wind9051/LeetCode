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
private:
    int sum = 0;
    void DFS(TreeNode* root, int cur) {
        cur = cur * 2 + root->val;
        if (!root->left && !root->right) {
            sum += cur;
            return;
        }
        if (root->left) DFS(root->left, cur);
        if (root->right) DFS(root->right, cur);
    }
        
public:
    int sumRootToLeaf(TreeNode* root) {
        DFS(root, 0);
        return sum;
    }
};
