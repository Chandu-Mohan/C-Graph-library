//
// Created by budda mohan chandu on 05/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "heap.h"


HEAP convertHeap(HEAP H,int i){
    int a =i,temp;
    int left = 2*i+1;
    int right= 2*i+2;
    if (left<H.size &&H.arr[left]<H.arr[a])a=left;
    if (right<H.size &&H.arr[right]<H.arr[a])a=right;
    if(a!=i){
        temp=H.arr[i];
        H.arr[i]=H.arr[a];
        H.arr[a]=temp;
        convertHeap(H,i);
    }
    return H;
}

HEAP buildHeap(HEAP H){
    for (int i = H.size/1 -1; i >=0 ; --i) {
        H=convertHeap(H,i);
    }
    return H;
}

HEAP createHeap(){
    HEAP H;
    H.size=0;
    return H;
}

int findMin(HEAP H){
    return H.arr[0];
}

HEAP extractMin (HEAP H){
    H.size--;
    H.arr[0]=H.arr[H.size];
    return buildHeap(H);

}

HEAP insertHeap(HEAP H, int k){
    H.arr[H.size]=k;
    H.size++;
    return H;
}

int isFullHeap(HEAP H){
    if(H.size==100){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmptyHeap(HEAP H){
    if(H.size==0){
        return 1;
    }
    else{
        return 0;
    }
}

