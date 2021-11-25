#include "intstack.h"

void init(IntStack *intstack, int size){
    intstack->data = malloc(sizeof(int)*size);
    intstack->maxelems = size;
    intstack->nelems = 0;
}

int push(IntStack *intstack, int data) {
    if(intstack->nelems==intstack->maxelems)
        return 1;
    intstack->data[intstack->nelems] = data;
    intstack->nelems++;
    return 0;
}

int pop(IntStack *intstack){
    if(intstack->nelems==0)
        return 1;
    intstack->nelems--;
    return intstack->data[intstack->nelems];
}

int isempty(IntStack *intstack){
    if(intstack->nelems==0)
        return 1;
    return 0;
}

int isfull(IntStack *intstack){
    if(intstack->nelems==intstack->maxelems)
        return 1;
    return 0;
}