#include <stddef.h>
#include <stdio.h>

struct flex_array_struct {
  size_t num;
  int data[];
};

void func(void) {
  struct flex_array_struct flex_struct;
  size_t array_size = 4;

  /* Initialize structure */
  flex_struct.num = array_size;

  for (size_t i = 0; i < array_size; ++i) {
    flex_struct.data[i] = 0;
  }
}

int main(void) {
  func();
  printf("Completed without crashing (may not always happen).\n");
  return 0;
}
