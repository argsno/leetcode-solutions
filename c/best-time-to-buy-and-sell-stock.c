#include <stdlib.h>

int maxProfit(int *prices, int pricesSize) {
  int incrementSize = pricesSize - 1;
  int *increment = (int *)malloc(sizeof(int) * (incrementSize));
  for (int i = 1; i < pricesSize; i++) {
    increment[i-1] = prices[i] - prices[i-1];
  }
  int max = 0;
  int cur = 0;
  for (int i = 0; i < incrementSize; i++) {
    cur += increment[i];
    if (cur > max)
      max = cur;
    if (cur < 0)
      cur = 0;
  }
  return max;
}
