#include <string.h>
#include <stdio.h>

char sum[5500] = {0};
void reverse(char* sum) {
  int sum_length = strlen(sum) - 1;
  int i = 0;
  while (sum_length > i) {
    int temp = sum[i];
    sum[i++] = sum[sum_length];
    sum[sum_length--] = temp;
  }
}

char* addStrings(char* num1, char* num2) {
  int num1_length = strlen(num1);
  int num2_length = strlen(num2);
  int carry = 0;
  int i = 0;
  while (num1_length || num2_length || carry) {
    int val1 = 0, val2 = 0;
    if (num1_length > 0) {
      val1 = num1[--num1_length] - '0';
    }
    if (num2_length > 0) {
      val2 = num2[--num2_length] - '0';
    }
    int sum_val = val1 + val2 + carry;
    carry = sum_val / 10;
    sum[i++] = sum_val % 10 + '0';
  }
  sum[i] = '\0';
  reverse(sum, i);
  return sum;
}
