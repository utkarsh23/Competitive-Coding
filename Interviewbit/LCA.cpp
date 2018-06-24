/**
 * Problem: https://www.interviewbit.com/problems/least-common-ancestor/
 *
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool existsPath(TreeNode* HEAD, int value, vector<int> &path) {
    
    if (HEAD == NULL)
        return false;
    else {
        path.push_back(HEAD->val);
        if (HEAD->val == value)
            return true;
    }
    
    if ((HEAD->left && existsPath(HEAD->left, value, path)) || (HEAD->right && existsPath(HEAD->right, value, path))) {
        return true;
    }
    
    path.pop_back();
    return false;
}
 
int Solution::lca(TreeNode* A, int B, int C) {
    
    vector<int> bPath, cPath;
    if (!existsPath(A, B, bPath) || !existsPath(A, C, cPath))
        return -1;
    
    int i, smallerVectorLen = min(bPath.size(), cPath.size());
    for (i = 0; i < smallerVectorLen; i++) {
        if (bPath[i] != cPath[i])
            break;
    }
    
    return bPath[i - 1];
}