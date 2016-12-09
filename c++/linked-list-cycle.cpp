#include <set>
#include <iostream>

using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    set<ListNode*> s;
    ListNode *cur = head;
    while (cur != NULL) {
      const bool is_in = s.find(cur) != s.end();
      if (is_in)
        return true;
      s.insert(cur);
      cur = cur->next;
    }
    return false;
  }
};

int main() {
  ListNode l = ListNode(1);
  Solution solu = Solution();
  cout << solu.hasCycle(&l) << endl;
}
