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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avg;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            double sum = 0.0, len = Q.size();
            for (int i = 0; i < len; i++) {
                TreeNode* now = Q.front(); Q.pop();

                sum += now->val;
                if (now->left != NULL) Q.push(now->left);
                if (now->right != NULL) Q.push(now->right);                
            }
            avg.push_back(sum / len);
        }
        return avg;
    }
};
