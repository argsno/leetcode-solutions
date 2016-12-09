struct ListNode {
  int val;
  struct ListNode *next;
};
void deleteNode(struct ListNode *node) {
  struct ListNode *cur = node;
  struct ListNode *next = node->next;
  cur->val = next->val;
  cur->next = cur->next->next;
}
