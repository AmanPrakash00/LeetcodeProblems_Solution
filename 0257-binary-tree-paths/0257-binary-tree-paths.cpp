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
void recSolve(TreeNode* root, vector<string> &ans, string s){
    s += (s.size()?"->":"") + to_string(root->val);
    if(!root->left && !root->right) 
    {
        ans.push_back(s);
    }
    if(root->left)  
    {
        recSolve(root->left, ans, s);
    }
    if(root->right) 
    {
        recSolve(root->right, ans, s);
    }
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    string s = "";
    recSolve(root, ans, s);
    return ans;
}
};