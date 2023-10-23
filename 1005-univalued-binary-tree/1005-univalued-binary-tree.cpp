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
    bool recSolve(TreeNode* &root ,int target){
        if(root == NULL){
            return true;
        }

        if(root -> val != target){
            return false;
        }

        bool leftAns = recSolve(root -> left ,target);
        bool rightAns = recSolve(root -> right ,target);

        return (leftAns && rightAns);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int target = root -> val;
        return recSolve(root,target);
    }
};