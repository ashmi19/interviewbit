int Solution::maxDepth(TreeNode* A)
{
    if(A)
    {
        if(!A->left && !A->right) return 1;
        int l = INT_MIN , r = INT_MIN;

        l = maxDepth(A->left);
        r = maxDepth(A->right);

        return max(l,r) + 1;

    }
    return 0;
}
