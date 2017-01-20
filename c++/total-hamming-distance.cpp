class Solution {
public:
  int totalHammingDistance(vector<int>& nums) {
    int res = 0;
    int remainder;
    while (1) {
      int n_zeros = 0;
      int nr_ones = 0;
      for (int i = 0; i < nums.size(); i++) {
        remainder = nums[i] % 2;
        if (remainder == 1)
          nr_ones++;

        nums[i] /= 2;
        if (nums[i] == 0)
          n_zeros++;
      }
      res += nr_ones * (nums.size() - nr_ones);
      if (n_zeros == nums.size())
        break;
    }
    return res;
  }
};
