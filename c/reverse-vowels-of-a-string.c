char *reverseVowels(char* s) {
  if (s == NULL) return s;
  int length = strlen(s);
  int i = 0, j = strlen(s) - 1;
  while (i <= j) {
    while (i <= length - 1) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') break;
      printf("%c\n", s[i]);
      i++;
    }
    while (j >= 0) {
      if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') break;
      printf("j -- %c\n", s[i]);
      j--;
    }
    if (i >= j) break;
    char temp = s[i];
    s[i++] = s[j];
    s[j--] = temp;
  }
  return s;
}
i
