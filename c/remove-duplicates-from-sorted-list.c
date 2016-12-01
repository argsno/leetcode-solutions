struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  ListNode* cur = head;
  ListNode* next = head->next;
  while (next != NULL) {
    int cur_val = cur->val;
    int next_val = next->val;
    if (cur_val == next_val) {
      next = next->next;
      cur->next = next;
      continue;
    }
    else {
      cur = next;
      next = next->next;
    }
  }
  return head;
}
