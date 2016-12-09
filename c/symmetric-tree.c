struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

bool isSym(struct TreeNode *left, struct TreeNode *right) {
  if (left == NULL)
    return right == NULL;
  if (right == NULL)
    return left == NULL;
  if (left->val != right->val)
    return false;
  if (!isSym(left->left, right->right))
    return false;
  if (!isSym(left->right, right->left))
    return false;
  return true;
}

bool isSymmetric(struct TreeNode* root) {
  if (root == NULL)
    return true;
  return isSym(root->left, root->right);
}

