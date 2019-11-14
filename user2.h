#include "list.h"
#include "lock.h"

int lock_and_pop_front(node_t ** head, struct spinlock* L) {
  sl_lock(L);
  int ret = pop_front(head);
  sl_unlock(L);
  return ret;
}
