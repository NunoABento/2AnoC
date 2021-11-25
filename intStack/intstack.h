#include <stdlib.h>

typedef struct IntStacks {
  int *data;
  int maxelems;
  int nelems;
} IntStack;
/**
 * @brief Initialize a stack with a given size
 * 
 * @param intstack Pointer to stack
 * @param size Stake size
 */
void init(IntStack *intstack, int size);
/**
 * @brief Insert data into stack
 * 
 * @param intstack Pointer to stack
 * @param data Data to insert in to stack
 * @return int 
 */
int push(IntStack *intstack, int data);
/**
 * @brief Remove data from stack
 * 
 * @param intstack Pointer to stack
 * @return int 
 */
int pop(IntStack *intstack);
/**
 * @brief Returns true if stack empty
 * 
 * @param intstack Pointer to queue
 * @return int 
 */
int isempty(IntStack *intstack);
/**
 * @brief Returns true if stack full
 * 
 * @param intstack Pointer to stack
 * @return int 
 */
int isfull(IntStack *intstack);