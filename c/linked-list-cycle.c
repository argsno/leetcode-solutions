struct ListNode {
  int val;
  struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
  if (head == NULL || head->next == NULL)
    return false;
  struct ListNode *slower = head;
  struct ListNode *faster = head->next;
  while (faster != NULL && faster->next != NULL) {
    if (slower == faster) return true;
    slower = slower->next;
    faster = faster->next->next;
  }
  return false;
}
