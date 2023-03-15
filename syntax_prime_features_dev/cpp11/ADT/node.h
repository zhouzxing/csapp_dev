#ifndef NODE_H_
#define NODE_H_
/**
 * 关键属性不清晰 - 从需求中抽取关键核心信息的能力 - 转换成编程模型
*/
struct employer
{
    // string name;
    int age;

};


struct node
{
    
    struct node *next;
};

typedef node Item;

#endif