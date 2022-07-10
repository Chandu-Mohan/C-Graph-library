//
// Created by budda mohan chandu on 05/02/22.
//

#ifndef SYGSYS_A1_LLIST_H
#define SYGSYS_A1_LLIST_H

#include "node.h"
typedef NODEP LLIST;

LLIST createList();
int searchList(LLIST H, int k);
LLIST insertAtFront(LLIST H, int k);
LLIST insertAtEnd(LLIST H, int k);
LLIST deleteFromFront(LLIST H, int *k);
LLIST deleteFromEnd(LLIST H, int *k);
LLIST deleteList(LLIST H, int k);

#endif //SYGSYS_A1_LLIST_H
