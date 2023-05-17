#include <iostream>

using namespace std;
class Base{
public:
    virtual void MyFunction(int x)
    {
        cout<<"Base ::MyFunction(int x) called with X = "<<x<<endl;
    }
};
class Derived :public Base{
public:
    void MyFunction(int x,int y)
    {
    cout<<"Derived::MyFunction (int x, int y) called with x = "<<x<<" and y = "<<y<<endl;
    }
};
int main()
{
    Derived a;
    a.MyFunction(23,22);


    return 0;
}
