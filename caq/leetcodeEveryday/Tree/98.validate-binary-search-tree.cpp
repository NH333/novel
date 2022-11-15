/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool isValidBST(TreeNode* root) {
        TreeNode* min = nullptr;
        TreeNode* max = nullptr;
        return helper(root, min, max);
    }

    bool helper(TreeNode* node, TreeNode* min, TreeNode* max) {
        if (node == nullptr) return true;

        if ((min) && (node->val <= min->val)) return false;
        if ((max) && (node->val >= max->val)) return false;

        bool left = helper(node->left, min, node);
        bool right = helper(node->right, node, max);

        return left && right;
    }
};
// @lc code=end

