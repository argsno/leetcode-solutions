int lengthOfLongestSubstring(char* s) {
  if (s == NULL) return NULL;
  int front = -1;
  int after = 0;
  int hash[256] = {0};
  int max_length = 0;
  while (s[after]) {
    char c = s[after];
    if (hash[c]) {
      while (s[++front] != c)
        hash[s[front]]--;
    } else {
      hash[c]++;
    }
    if (after - front > max_length)
      max_length = after - front;
    after++;
  }
  return max_length;
}
