//
// Created by budda mohan chandu on 05/02/22.
//

#ifndef SYGSYS_A1_UNION_FIND_H
#define SYGSYS_A1_UNION_FIND_H


typedef struct N{
    int size;
    int data;
    struct N *next;
}N;

typedef N *NODE_PTR;
typedef NODE_PTR UNION_FIND;

UNION_FIND createUF(int n);
UNION_FIND makeSetUF(UNION_FIND F, int x, int *i);
NODE_PTR findUF(UNION_FIND F, int i);
void unionUF(UNION_FIND F, int i, int j);

#endif //SYGSYS_A1_UNION_FIND_H
