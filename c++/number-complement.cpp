class Solution {
public:
  int findComplement(int num) {
    int complete = 0;
    int orig = num;
    while (num) {
      complete *= 2;
      complete += 1;
      num /= 2;
    }
    return complete - orig;
  }
};
