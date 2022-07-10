//
// Created by budda mohan chandu on 05/02/22.
//

#ifndef SYGSYS_A1_STACK_H
#define SYGSYS_A1_STACK_H

#include "node.h"
typedef  NODEP STACK;

STACK createStack();
int isEmptyStack(STACK S);
STACK push(STACK S, int k);
STACK pop(STACK S, int *k);

#endif //SYGSYS_A1_STACK_H
