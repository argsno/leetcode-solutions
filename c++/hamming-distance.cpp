class Solution {
public:
  int hammingDistance(int x, int y) {
    int dist = 0;
    while (x || y) {
      int x_r = x % 2;
      int y_r = y % 2;
      if (x_r != y_r)
        dist++;
      x /= 2;
      y /= 2;
    }
    return dist;
  }
};
