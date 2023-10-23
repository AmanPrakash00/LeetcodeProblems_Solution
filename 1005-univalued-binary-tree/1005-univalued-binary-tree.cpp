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
    // Approach -> 1
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

    //Approach -> 2
    //we know that in univalued BT we have only 1 element
    //we can do using map if (map.size>1) return false 
    bool solveRecMap(TreeNode* &root , unordered_map<int,int> &m){
        if(m.size()>1){
            return false;
        }
        if(root == NULL){
            return true;
        }
        m[root -> val]++;
        bool leftAns = solveRecMap(root -> left ,m);
        bool rightAns = solveRecMap(root -> right ,m);

        return (leftAns && rightAns);
    }
    bool isUnivalTree(TreeNode* root) {
        // approach 1
        // if(root == NULL){
        //     return true;
        // }
        
        // int target = root -> val;
        // return recSolve(root,target);
        unordered_map<int,int> m;

        return solveRecMap(root ,m);
    }
};