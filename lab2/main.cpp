#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
class MyClass
{
private:
    T value_;

public:
    MyClass(T value):value_(value){}
    void Set_Value(T value_)
    {
        value_ = value_;
    }
    T Get_Value()const
    {
        return value_;
    }
    T add(T value_)const
    {
        return this->value_ +value_;
    }
    T subtract(T value_)
    {
        return this->value_ -value_;
    }
};



int main()
{

    return 0;
}
