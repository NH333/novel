/*
 * @lc app=leetcode id=95 lang=cpp
 *
 * [95] Unique Binary Search Trees II
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
    vector<TreeNode*> helper(int start, int end) {
        if (start > end) {
            return {NULL};
        }

        vector<TreeNode*> subLeftTree, subRighTree, result;
        for (int i = start; i <= end; i++)
        {
            subLeftTree = helper(start, i-1);
            subRighTree = helper(i+1, end);

            for (auto lt : subLeftTree) {
                for (auto rt : subRighTree) {
                    TreeNode* root = new TreeNode(i);
                    root->left  = lt;
                    root->right = rt;
                    result.push_back(root);
                }
            }
        }

        return result;
    }

    vector<TreeNode*> generateTrees(int n) {
        return helper(1, n);
    }
};
// @lc code=end

