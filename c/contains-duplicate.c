#include "uthash.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct my_struct {
  int id;
  int val;
  UT_hash_handle hh;
};
struct my_struct *values = NULL;

void add_val(int id, int val) {
  struct my_struct *s;
  s = malloc(sizeof(struct my_struct));
  s->id = id;
  s->val = val;
  HASH_ADD_INT(values, id, s);
}

struct my_struct *find_user(int id) {
  struct my_struct *s;
  HASH_FIND_INT(values, &id, s);
  return s;
}

void delete_all() {
  struct my_struct *current_val, *tmp;

  HASH_ITER(hh, values, current_val, tmp) {
    HASH_DEL(values, current_val);
    free(current_val);
  }
}
bool containsDuplicate(int* nums, int numsSize) {
  HASH_CLEAR(hh, values);
  for (int i = 0; i < numsSize; i++) {
    struct my_struct *s;
    s = find_user(nums[i]);
    if (s != NULL) {
      return true;
    }
    add_val(nums[i], 1);
  }
  HASH_CLEAR(hh, values);
  //delete_all();
  return false;
}

int main() {
  int a[] = {3, 5};
  printf("%d\n", containsDuplicate(a, 2));
  printf("%d\n", containsDuplicate(a, 2));
}
