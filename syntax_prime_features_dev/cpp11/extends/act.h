#ifndef ACT_H_
#define ACT_H_

#include <string>


class act
{
private:
    std::string full_name;
    long acct_num;
    bool flag;
protected:
    //支持组件：输出格式化，等其他内部组件，如node链表节点、数组等等
    struct formatting
    {
        std::streamsize pr;
    };
    const std::string& full_name(){return full_name;};
    formatting& get_format() const;
    void restore(formatting& format);

public:
    act(const std::string fn, long acct, bool fg):full_name(fn),acct_num(acct),flag(fg){};

    //虚函数 || 纯虚函数
    virtual void access();
    virtual void show() const = 0;
};

class imp_act:public act
{
public:
    imp_act(const std::string fn, long acct, bool fg):act(fn,acct,fg){};

    //虚函数声明与定义
    virtual void access();
    virtual void show() const;

};

class dif_imp_act:public act
{
private:
    double d_num;

public:
    dif_imp_act(const std::string fn, long acct, bool fg):act(fn,acct,fg){};
    dif_imp_act(const imp_act& impAct,double dn):act(impAct),d_num(dn){};
    
    //虚函数声明与定义
    virtual void access();
    virtual void show() const;
};

#endif