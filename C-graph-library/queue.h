//
// Created by budda mohan chandu on 05/02/22.
//

#ifndef SYGSYS_A1_QUEUE_H
#define SYGSYS_A1_QUEUE_H

#include "node.h"
typedef  NODEP QUEUE;

QUEUE createQueue();
int isEmptyQueue(QUEUE Q);
QUEUE enqueue(QUEUE Q, int k);
QUEUE dequeue(QUEUE Q, int *k);

#endif //SYGSYS_A1_QUEUE_H
