//
// Created by budda mohan chandu on 05/02/22.
//

#ifndef SYGSYS_A1_HEAP_H
#define SYGSYS_A1_HEAP_H


typedef struct _HEAP{
    int arr[100];
    int size;
}HEAP;
HEAP convertHeap(HEAP H,int i);
HEAP buildHeap(HEAP H);
HEAP createHeap();
int findMin(HEAP H);
HEAP extractMin (HEAP H);
HEAP insertHeap(HEAP H, int k);
int isFullHeap(HEAP H);
int isEmptyHeap(HEAP H);

#endif //SYGSYS_A1_HEAP_H

