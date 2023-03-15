#include<iostream>
#include "stack.h"

Stack::Stack(int top)
{
    this->top = top;
}

Stack::~Stack()
{

}

bool Stack::isFull()
{
    if (top >= MAX_COUNT)
    {
        return true;
    }
    return false;
    
}
bool Stack::isEmpty()
{
    if (top <= 0)
    {
        return true;
    }
    return false;
}

bool Stack::push(const Item & item)
{
    if (isFull())
    {
        return false;
    }
    arr[top++] = item;
    return true;
}

bool Stack::pop(Item & temp)
{
    if (isEmpty())
    {
        return false;
    }
    temp = arr[--top];
    return true;
    
}