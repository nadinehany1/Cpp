#include <iostream>
#include <string>

using namespace std;

// inheritance

class Shape
{
    private:

    protected:

    float pi = 3.14159265359;
    float Width;
    float Heigth;
    float temp;
    float d;
    public:
    virtual ~Shape(){}
    float get_height(float heigth)
    {
        return Heigth;
    }
        float get_width(float width)
    {
        return Width;
    }
        void set_hidth(float heigth)
    {
        Heigth = heigth;
    }
        void set_width(float width)
    {
        Width = width;
    }

        void Display()
        {
            cout << "Ciurcumstance  = "<<(Width+Heigth)<<endl;
            cout << "Area = " << (Width*Heigth)<<endl;
        }

};



class Triangle: public Shape
{
private:
  //  Width =20;
    //Heigth =10;

    public:

    void Display()
    {
        Shape::Display();
    }

};

class Squre: public Shape
{
private:

    public:

    void Display()
    {
        Shape::Display();
    }
};

class Rectangular: public Shape
{
private:

    public:

    void Display()
    {
        Shape::Display();
    }

};

int main()
{
    Squre s1;
    s1.set_width(10);
    s1.set_hidth(20);
    s1.Display();

    Rectangular r1;
    r1.set_hidth(50);
    r1.set_width(30);
    r1.Display();


    Triangle t1;
    t1.set_hidth(20);
    t1.set_width(30);
    t1.Display();

    cout<<endl;
    cout <<endl;



}
