#include "student.h"



double student::average() const
{
    return scores.sum() / scores.size();
}
double& student::operator[](int i)
{
    return scores[i];
}
double student::operator[](int i) const
{
    return scores[i];
}

/**
 * 只输入名字
*/
istream& operator>>(std::istream& is, student& stu)
{
    is >> stu.name;
    return is;
}
istream& getline(std::istream& is, student& stu)
{
    getline(is,stu.name);
    return is;
}

//
ostream& student::arr_out(std::ostream& os) const
{
    int size = scores.size();
    int index = 0;
    while (index < size)
    {
        os << scores[index] << " ";
        if (index % 5 == 4)
            os << "\n";
        index++;
    }

    if (index % 5 != 0)
        os << "\n";
    
    return os;
}

ostream& operator<<(std::ostream& os, const student& stu)
{
    os << stu.getName() << "scores: ";
    stu.arr_out(os); //友元可访问私有-保护成员
    return os;
}
