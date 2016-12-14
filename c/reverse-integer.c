int reverse(int x) {
  int flag = 0;
  long long res = 0;
  while (x) {
    res *= 10;
    res += x % 10;
    x /= 10;
  }
  if (res > 2147483647 || res < -2147483648)
    return 0;
  return res;
}
