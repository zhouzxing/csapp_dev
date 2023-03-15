#include "student_private.h"


const string& student::getName() const
{
    // return string::c_str();
    return (const string&) *this;
}
double student::average() const
{
    return array::sum() / array::size();
}

double& student::operator[](int i)
{
    return array::operator[](i);
}
double student::operator[](int i) const
{
    return array::operator[](i);
}

istream& operator>>(istream& is, student& stu)
{
    is >> (string&)stu;
    return is;
}
istream& getline(istream& is, student& stu)
{
    getline(is,(string&)stu);
    return is;
}

ostream& student::arr_out(std::ostream& os) const
{
    array& ar = (array&) *this;
    int size = ar.size(),i = 0;

    for (; i < size; i++)
    {
        os << ar[i];
        if (i % 5 == 4)
            os << "\n";
    }

    if (i % 5 != 0)
        os << "\n";

    return os;
}

ostream& operator<<(ostream& os, const student& stu)
{
    os << (const string&) stu;
    stu.arr_out(os);
    return os;
}