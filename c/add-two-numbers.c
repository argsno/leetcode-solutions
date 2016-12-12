struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *cur1 = l1, *cur2 = l2;
  int carry = 0;
  struct ListNode *cur = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode *head = cur;
  cur->next = NULL;
  while (true) {
    int val1 = 0, val2 = 0;
    if (cur1 != NULL) {
      val1 = cur1->val;
      cur1 = cur1->next;
    }
    if (cur2 != NULL) {
      val2 = cur2->val;
      cur2 = cur2->next;
    }
    int sum = val1 + val2 + carry;
    carry = sum / 10;
    sum = sum % 10;
    cur->val = sum;
    if (cur1 || cur2 || carry) {
      struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
      node->next = NULL; // 缺少初始化，导致在提交时出现 Runtime Error
      node->val = 0;
      cur->next = node;
      cur = node;
    } else {
      break;
    }
  }
  return head;
}
