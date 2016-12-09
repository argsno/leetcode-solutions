#include <string.h>
#include <stdio.h>
#include <stdbool.h>
int myAtoi(char *str) {
  int i = 0;
  int len = strlen(str);
  bool neg = false;
  long long value = 0;
  while (i < len && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
    i++;
  if (str[i] == '+') i++;
  else if (str[i] == '-') {
    i++;
    neg = true;
  }
  while (i < len && str[i] >= '0' && str[i] <= '9') {
    value *= 10;
    value += str[i] - '0';
    i++;
    if (value > 2147483647 || value < -2147483648)
      break;
  }
  if (neg)
    value *= -1;
  if (value > 2147483647)
    value = 2147483647;
  if (value < -2147483648)
    value = -2147483648;
  return value;
}

int main() {
  printf("%d\n", myAtoi("2147483648"));
  printf("%d\n", myAtoi("a123"));
  return 0;
}
