//
// Created by budda mohan chandu on 05/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "llist.h"

LLIST createList(){
    LLIST H;
    H=(LLIST) malloc(sizeof(NODE));
    H->data=-1;
    H->next=NULL;
    return H;
}

int searchList(LLIST H, int k){
    LLIST P;
    P=H;
    while (P!=NULL) {
        if(P->data==k)return 1;
        P=P->next;
    }
    return 0;
}

LLIST insertAtFront(LLIST H, int k){
    if(H->next==NULL && H->data==-1){
        H->data=k;
        return H;
    }
    else{
        LLIST P;
        P=createList();
        P->data=k;
        P->next=H;
        return P;
    }


}
LLIST insertAtEnd(LLIST H, int k){
    if(H->next==NULL && H->data==-1){
        H->data=k;
        return H;
    }
    else{
        LLIST P;
        P=createList();
        P=H;
        while (P->next!=NULL){
            P=P->next;
        }
        LLIST P1;
        P1=createList();
        P1->data=k;
        P->next=P1;
        return H;
    }



}
LLIST deleteFromFront(LLIST H, int *k){

    if(H->next==NULL ){
        *k=H->data;
        H->data=-1;
        return H;
    }
    LLIST P=H;
    *k=P->data;
    H=H->next;
    free(P);
    return H;

}
LLIST deleteFromEnd(LLIST H, int *k){
    if(H->next==NULL ){
        H->data=-1;
        return H;
    }
    LLIST P;
    P=H;
    while (P->next->next!=NULL){
        P=P->next;
    }
    *k=P->next->data;
    free(P->next);
    P->next=NULL;

    return H;

}
LLIST deleteList(LLIST H, int k){
    LLIST P,P1;
    P=H;

    while (P->next->data!=k){
        P=P->next;
    }
    P1=P->next;

    P->next=P->next->next;
    free(P1);
    return H;

}


