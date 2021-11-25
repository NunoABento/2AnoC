#include <stdlib.h>

typedef struct IntQueues {
  int *data;
  int maxelems;
  int nelems;
} IntQueue;
/**
 * @brief Initialize a queue with a given size
 * 
 * @param intqueue Pointer to queue
 * @param size Queue size
 */
void init(IntQueue *intqueue, int size);
/**
 * @brief Insert data into queue
 * 
 * @param intqueue Pointer to queue
 * @param data Data to insert in queue
 * @return int 
 */
int push(IntQueue *intqueue, int data);
/**
 * @brief Remove data from queue
 * 
 * @param intqueue Pointer to queue
 * @return int 
 */
int pop(IntQueue *intqueue);
/**
 * @brief Returns true if queue empty
 * 
 * @param intqueue Pointer to queue
 * @return int 
 */
int isempty(IntQueue *intqueue);
/**
 * @brief Returns true if queue full
 * 
 * @param Intqueue Pointer to queue
 * @return int 
 */
int isfull(IntQueue *intqueue);
