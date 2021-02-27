/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A)
{
    if(!A) return {};
    vector<int> ans;
    stack<TreeNode *> s;
    s.push(A);
    while(!s.empty())
    {
        TreeNode * temp = s.top();
        s.pop();

        ans.push_back(temp->val);

        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
    return ans;
}
