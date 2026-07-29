class Solution {
public:
    void Traverse(TreeNode* root, vector<int>& result) 
    { 
        if (root == nullptr) 
        {
            result.push_back(INT_MIN);
            return;
        }
        result.push_back(root->val);
        Traverse(root->left, result);
        Traverse(root->right, result);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> result1;
        vector<int> result2;

        Traverse(p, result1);
        Traverse(q, result2);

        return result1 == result2; 
    }
};