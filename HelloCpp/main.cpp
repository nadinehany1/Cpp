#include <iostream>

using namespace std;

struct rectangle
{
    int width;
    int hight;
    int area()
    {
        return width*hight;
    }

    void print()
    {
        cout << "Rectangle: "<<width << " "<<hight<<endl;
    }
};


    void fun(int & a)
    {
        a++;
    }
int main()
{
    rectangle r1;
    r1.width =5;
    r1.hight =10;
    r1.print();
    cout <<"Area: "<<r1.area()<<endl;
    int x = 5 ;
    int y = 10;
    int& ref = x ;
    cout << "ref points to " << ref<<endl;
    ref = y;
    cout << "ref points to " << ref<<endl;
    cout << "x = "<<x<< endl;
    cout << "y = "<<y<< endl;
    fun(y);
    cout << "y = "<<y<<endl;
    return 0;
}
