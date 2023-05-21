#include <iostream>

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
    MyClass<int>intobj(5.2);
    cout<<"init value: "<<intobj.Get_Value()<<endl;
    cout<<"add 2: "<<intobj.add(2)<<endl;
    cout<<"subtract 2: "<<intobj.subtract(2)<<endl;

    MyClass<double>doubleobj(5.3);
    cout<<"init value: "<<doubleobj.Get_Value()<<endl;
    cout<<"add 2: "<<doubleobj.subtract(2)<<endl;
    cout<<"subtract 1: "<<doubleobj.subtract(1)<<endl;

    return 0;
}
