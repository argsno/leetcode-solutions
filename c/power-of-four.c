#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int num) {
  if (num <= 0) return false;
  while (num % 4 == 0) {
    num /= 4;
  }
  return num == 1;
}

bool isPowerOfFour2(int num) {
  return (num > 0) && ((num & (num - 1)) == 0) && ((num & 0x55555555) == num);
}
