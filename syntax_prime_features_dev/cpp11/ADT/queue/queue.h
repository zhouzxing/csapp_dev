#ifndef QUEUE_H_
#define QUEUE_H_
#include <cstdlib>
/**
 * Item - 顾客关键信息： 到达，离开 = 队列入队出队 -> 到达时刻，处理时长，
*/
class Customer
{
private:    
    long arrive;
    int process_time;
public:

    Customer(){arrive = process_time = 0;};
    Customer(long arr,int prt){arrive = arr;process_time=prt;};

    void set_arrive(long when){arrive = when;};
    void set_process_time(int duration){process_time = duration;};
    void set_when(long when){set_arrive(when);set_process_time(std::rand()%3 + 1);}; //默认客户最多0-3

    long get_arrive(){return arrive;};
    int get_process_time(){return process_time;};

    Customer& operator=(const Customer &customer){arrive=customer.arrive;process_time=customer.process_time;return *this;};
};

typedef Customer Item;

/**
 * 抽象队列类，核心API: enqueue/dequeue
 * 核心成员：capacity | size, front | rear ele [指针|数组]
*/

class Queue
{
private:
    //提供默认最大容量值
    static const int MAX_CAPACITY = 10;
    //指针实现
    struct node{ Item item;struct node *next;};
    const int capacity; //最大容量
    int size; //当前容量
    node *front,*rear;

    //暂不支持 复制构造 与 赋值运算符
    Queue(const Queue& queue):capacity(0){};
    Queue& operator=(const Queue& queue){return *this;};

public:
    Queue();
    ~Queue();

    int queue_count() const{return size;};
    bool isFull() const{return queue_count()==capacity;};
    bool isEmpty() const{return queue_count()==0;};

    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};


#endif