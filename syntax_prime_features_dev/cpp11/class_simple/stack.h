#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    static const int MAX_COUNT = 10;
    Item arr[MAX_COUNT];
    int top;

public:
    Stack(int top = 0);
    ~Stack();
    bool isFull();
    bool isEmpty();

    bool push(const Item &);
    bool pop(Item &);

};


#endif