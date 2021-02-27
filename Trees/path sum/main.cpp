int Solution::hasPathSum(TreeNode* A, int B)
{
    if(A)
    {
        if(!A->left && !A->right)
        {
            if(A->val == B) return 1;
            return 0;
        }
        int l = 0 , r =0;
        l = hasPathSum(A->left , B - A->val);
        r = hasPathSum(A->right , B - A->val);

        return (l == 1) ? l : r;
    }
    return 0;
}
