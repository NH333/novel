/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
 */

// @lc code=start
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
    TreeNode* pre = nullptr;
    TreeNode* first = nullptr;
    TreeNode* sencond = nullptr;

    void inordered(TreeNode* node) {
        if (node == nullptr) return ;

        inordered(node->left);

        if (pre && (node->val < pre->val)) {
            if (!first) {
                first = pre;
            }

            sencond = node;
        }
        
        pre = node;

        inordered(node->right);
    }

    void recoverTree(TreeNode* root) {
        inordered(root);

        if (first && sencond) {
            swap(first->val, sencond->val);
        }
        return ;
    }
};
// @lc code=end

