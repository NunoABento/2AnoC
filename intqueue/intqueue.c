#include "intqueue.h"

void init(IntQueue *intqueue, int size){
    intqueue->data = malloc(sizeof(int)*size);
    intqueue->maxelems = size;
    intqueue->nelems = 0;
}

int push(IntQueue *intqueue, int data) {
    if(intqueue->nelems==intqueue->maxelems)
        return 1;
    
    for(int i=intqueue->nelems;i>0;i--){
        intqueue->data[i] = intqueue->data[i]^intqueue->data[i-1];
        intqueue->data[i-1] = intqueue->data[i]^intqueue->data[i-1];
        intqueue->data[i] = intqueue->data[i]^intqueue->data[i-1];
    }
    intqueue->data[0] = data;
    intqueue->nelems++;
    return 0;
}

int pop(IntQueue *intqueue){
    if(intqueue->nelems==0)
        return 1;
    intqueue->nelems--;
    return intqueue->data[intqueue->nelems];
}

int isempty(IntQueue *intqueue){
    if(intqueue->nelems==0)
        return 1;
    return 0;
}

int isfull(IntQueue *intqueue){
    if(intqueue->nelems==intqueue->maxelems)
        return 1;
    return 0;
}