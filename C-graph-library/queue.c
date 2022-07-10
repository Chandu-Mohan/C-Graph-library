//
// Created by budda mohan chandu on 05/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "llist.h"
#include "queue.h"

QUEUE createQueue(){
    QUEUE Q= createList();
    return Q;
}
int isEmptyQueue(QUEUE Q){
    if(Q->next==NULL &&Q->data==-1){
        return 1;
    }
    else{
        return 0;
    }
}
QUEUE enqueue(QUEUE Q, int k){
    return insertAtEnd(Q,k);
}
QUEUE dequeue(QUEUE Q, int *k){
    return deleteFromFront(Q,k);

}


