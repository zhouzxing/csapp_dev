#include <iostream>
#include "queue.h"

Queue::Queue():capacity(MAX_CAPACITY)
{
    front = rear = nullptr;
    size = 0;
}

//释放队列：如果队列内还有node，遍历释放
Queue::~Queue()
{
    node *temp;
    while (front)
    {
        temp = front;        
        front = front->next;
        delete temp;
    }
}

/**
 * 动态生成节点 ：模拟顾客入队出队 - new | delete
*/
bool Queue::enqueue(const Item &item)
{
    if (isFull())
        return false;
    
    node *temp = new node;
    temp->item = item;
    if (front == nullptr)
        front = temp;
    else
        rear->next = temp;
    rear = temp;
    
    size++;
    return true;
}
bool Queue::dequeue(Item &item)
{
    if (isEmpty())
        return false;

    node *temp = front;
    if (front == rear)
        front = rear = nullptr;
    else
        front = front->next;
    item = temp->item;
    delete temp;

    size--;
    return true;
}