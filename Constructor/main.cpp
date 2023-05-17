#include <iostream>


class Counter
{
private:
    unsigned int counte;

    public:
    // Access specifier
    Counter(): counte(0)
    {     // Constructor
    }
    Counter(int c): counte(0)
    {
    }
    unsigned int get_count()
    {
       counte++;
//        return counte(counte);
    }
};
/*
Counter operator + (Distance d2)
{
    int f = feet + d2.feet;
    float i =inches+d2.inches;
    if(i>= 12.0)
    {
        i = 12.0;
        f++
    }
    return Distance(f,i);

}
*/
int main()
{
    Counter hi;
    Counter p = ++hi;
    return 0;
}

