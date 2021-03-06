#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  bool isSymmetric(TreeNode *root) {
    if (root == NULL)
      return true;
    vector<TreeNode*> visitQueue;
    visitQueue.push_back(root);
    int curLevel = 1;
    while (curLevel > 0) {
      int i = 0;
      while (i < curLevel) {
        TreeNode *p = visitQueue[i];
        i++;
        if (p == NULL) continue;
        visitQueue.push_back(p->left);
        visitQueue.push_back(p->right);
      }
      int start = 0;
      int end = curLevel - 1;
      while (start < end) {
        TreeNode *pl = visitQueue[start];
        TreeNode *pr = visitQueue[end];
        int l = pl == NULL ? -1 : pl->val;
        int r = pr == NULL ? -1 : pr->val;
        if (l != r)
          return false;
        start++;
        end--;
      }
      visitQueue.erase(visitQueue.begin(), visitQueue.begin() + curLevel);
      curLevel = visitQueue.size();
    }
    return true;
  }
};
