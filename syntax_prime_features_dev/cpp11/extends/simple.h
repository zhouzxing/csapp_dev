#ifndef SIMPLE_H_
#define SIMPLE_H_

#include <string>


class simple
{
private:
    std::string fname;
    std::string lname;
    bool flag;
protected:
    int balance;

public:
    simple(const std::string& fn,const std::string& ln,bool fg);
    // simple(std::string& fn,std::string& ln,bool fg); //bad idea

    void name() const;
    bool isFlag() const{return flag;};
    void setFlag(bool b_flag){flag = b_flag;};

    virtual void show();
    virtual void show_hide();
};

class diff_simple : public simple
{
private:
    int rating;

public:
    diff_simple(const std::string& fn,const std::string& ln,bool fg,int rt):simple(fn,ln,fg),rating(rt){};
    diff_simple(const simple& sim,int rt):simple(sim),rating(rt){};
    //复制构造
    diff_simple(const simple& si):simple(si){};

    int getRating()const{return rating;};
    void resetRating(int rt){rating=rt;};

    virtual void show();
    virtual void show_hide();
    virtual void show_hide(int i); //覆盖上一条

    void show_protected(){std::cout<< balance;};
};

#endif