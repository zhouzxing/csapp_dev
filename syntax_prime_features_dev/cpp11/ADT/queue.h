#ifndef QUEUE_H_
#define QUEUE_H_

#include "node.h"

class Queue
{
private:
    enum{MAX_CAPACITY=10,};
    /* data */

public:
    Queue(int capacity = MAX_CAPACITY);
    ~Queue();

    bool is_empty() const;
    bool is_full() const;

    bool enqueue(Item &item);
    Item& dequeue();

};



#endif