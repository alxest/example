#include "list.h"
#include "lock.h"

void lock_and_push_front(node_t ** head, int val, struct spinlock *L) {
  sl_lock(L);
  push_front(head, val);
  sl_unlock(L);
}
