#include "discription.h"
#include <stdlib.h>

void init_linked_list(node* node) {
   node = (node*)malloc(sizeof(node*));
   node->value = 0;
   node->next = NULL;
}

int main() {
   node* linked_list;
   init_linked_list(linked_list);
}