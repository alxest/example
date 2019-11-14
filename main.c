#include "list.h"

int main() {
  node_t* list = init(1);
  push_front(&list, 2);
  push_front(&list, 3);
  printf("%d\n", pop_front(&list));
  printf("%d\n", pop_front(&list));
  printf("%d\n", pop_front(&list));
  printf("%d\n", pop_front(&list));
  printf("%d\n", pop_front(&list));
  return 0;
}
