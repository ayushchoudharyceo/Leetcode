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
    void Traverse(TreeNode* root, int level, vector<vector<int>>& result)
    {
        if(root==nullptr) return;
        if(level == result.size())
        {
            result.push_back({});
        }
        result[level].push_back(root->val);
        Traverse(root->left, level+1, result);
        Traverse(root->right, level+1, result);
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>>result;
        int level=0;
        Traverse(root,level,result);
        return result;
    }
};