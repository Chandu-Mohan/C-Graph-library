//
// Created by budda mohan chandu on 05/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "uFind.h"

UNION_FIND createUF(int n){
    NODE_PTR F;
    F=(NODE_PTR) malloc(n*sizeof (N));
    for (int i = 0; i <n ; ++i) {
        F[i].next=NULL;
        F[i].data=-1;
        F[i].size=-1;
    }
    return F;
}
UNION_FIND makeSetUF(UNION_FIND F, int x, int *i){
    NODE_PTR P;
    P=(NODE_PTR) malloc(sizeof (N));
    P->data=x;
    P->next=NULL;
    P->size=1;
    F[*i].next=P;
    *i=*i+1;
    return F;
}
NODE_PTR findUF(UNION_FIND F, int i){
    NODE_PTR P=(F+i)->next;
    while (P->next!=NULL){
        P=P->next;
    }
    return P;
}
void unionUF(UNION_FIND F, int i, int j){
    NODE_PTR P;
    NODE_PTR P1;
    P= findUF(F,i);
    P1= findUF(F,j);
    if(P->size>P1->size){
        P1->next=P;
        P->size+=P1->size;
    }
    else{
        P->next=P1;
        P1->size+=P->size;
    }
}
