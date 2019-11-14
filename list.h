#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

node_t *init(int val) {
  node_t * head = malloc(sizeof(node_t));
  head->val = val;
  head->next = NULL;
  return head;
}

void push_front(node_t ** head, int val) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int pop_front(node_t ** head) {
    int retval;
    node_t * next_node = NULL;

    if (*head == NULL) return -1;

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}
