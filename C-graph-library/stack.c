//
// Created by budda mohan chandu on 05/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "llist.h"
#include "stack.h"


STACK createStack(){
    STACK S=createList();
    return S;
}
int isEmptyStack(STACK S){
    if(S->next==NULL && S->data==-1 ){
        return 1;
    }
    else{
        return 0;
    }

}
STACK push(STACK S, int k){
    return insertAtFront(S,k);

}
STACK pop(STACK S, int *k){
    return deleteFromFront(S,k);
}

