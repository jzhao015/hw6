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
    TreeNode* searchBST(TreeNode* root, int val) {
     if(root==NULL)return NULL; //we need to make sure the root exist. if not exist, return null           
     else if (root->val == val)return root; /*if the root's value equals to the value we want, then simply return the root*/
        else if (root->val < val) return searchBST(root->right,val); /*if the root's value is smaller than the val, recursively search the subtree by going to right. */
        else return searchBST(root->left,val); /*else the node's value is larger than the val, recursively search through the bst by pointing to left.*/
    }
};
