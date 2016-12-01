bool isUgly(int num) {
  if (num <= 0) {
    return false;
  }

  int i = 2;
  while (num > 1) {
    if (num % i == 0) {
      num /= i;
    } else {
      i++;
    }
    if (i > 5) {
      return false;
    }
  }
  return true;
}
