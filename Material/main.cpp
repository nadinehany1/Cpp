#include <iostream>
#include <string.h>

using namespace std;

class Material
{
    private:
    protected:
    string Name;
    string Type;
    public:
    // Display
     void Display()
    {
        cout <<"Hello, I'm Material! And I might be Everything!!"<<endl;
        cout <<endl;
    }

};
class Non_Living_Thing: public Material
{
    private:
    protected:
    string Color;
    public:
        void Non_Living_Thing_Introduction()
        {
            cout<<"I'm a non Living thing like air, fire and water."<<endl;
        }

};


class Air: public Non_Living_Thing
{
    private:

    public:
       float Boiling_temperature;
       float Elasticity;
       float Density;
       string Type;
       string Color;
       Air():Type("Water"),Boiling_temperature(100),Elasticity(1421000),Density(1.293),Color("Colorless")
       {
       }
       void Display()
    {
        Material::Display();
        cout<<"My type is "<<Type<<endl;
        cout<<"My Color is "<<Color<<endl;
        cout<<"Boiling Temperature = "<<Boiling_temperature<<" Degree Celsius"<<endl;
        cout<<"Elasticity = "<<Elasticity<<" Pa"<<endl;
        cout<<"Density = "<<Density<<" Kg.M-3 at a temperature of 273 K and a pressure of 101.325 kPa"<<endl;
        cout<<endl;
    }

};

class Rock: public Non_Living_Thing
{
    private:
        float Hardness;
        float Bulk_Modulus;
        float Poisson_Ratio;
        float Thermal_Conductivity;
        string Type;
        string Color;
    public:
        Rock():Type("Steel - AISI 52100 alloy steel"),Hardness(875),Bulk_Modulus(140),Poisson_Ratio(0.27-0.30),Thermal_Conductivity(46.6),Color("Silver")
        {

        }
       /* void Rock_Introduction()
        {
            cout <<"My Type is "<<Type<<endl;
            cout << "Hardness = "<<Hardness<<endl;
            cout << "Bulk Modulus = "<<Bulk_Modulus<<" GPa"<<endl;
            cout << "Poison's Ratio = "<<Poisson_Ratio<<endl;
            cout << "Thermal Conductivity = "<<Thermal_Conductivity<<endl;
        }*/
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout <<"My Color is "<<Color<<endl;
        cout << "Hardness = "<<Hardness<<endl;
        cout << "Bulk Modulus = "<<Bulk_Modulus<<endl;
        cout << "Poison's Ratio = "<<Poisson_Ratio<<endl;
        cout << "Thermal Conductivity = "<<Thermal_Conductivity<<" W/mK"<<endl;
        cout<<endl;
    }

};

class Living_Thing: public Material
{
    private:
        int Age;
        //string Type;
    public:

};

class Animal: public Living_Thing
{
    private:
        string Sounds;
        string Name;
        string Type;
        int Age;
    public:
        Animal():Type("Cat"),Name("Lolo"),Age(4),Sounds("Meow")
        {

        }
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout << "My Name is "<<Name<<endl;
        cout << "My Age is "<<Age<<endl;
        cout << "My Sounds is "<<Sounds<<endl;
        cout<<endl;
    }

};

class Plant: public Living_Thing
{
    private:
        string Spieces;
        string color;
    public:

};
class Mammal: public Animal
{
   private:
    public:
        string Type;
        string Sounds;
        int Age;
         public:
        Mammal():Type("Cat"),Age(4),Sounds("Mooo")
        {

        }
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout << "My Age is "<<Age<<endl;
        cout << "My Sounds is "<<Sounds<<endl;
        cout<<endl;
    }

};

class Cat: public Mammal
{
    private:
    public:
        string Type;
        string Sounds;
        string Name;
        int Age;
         public:
        Cat():Type("Cat"),Name("Bosy"),Age(3),Sounds("Meow")
        {

        }
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout << "My Name is = "<<Name<<endl;
        cout << "My Age is = "<<Age<<endl;
        cout << "My Sounds is = "<<Sounds<<endl;
        cout<<endl;
    }

};

class Dog: public Mammal
{
    private:
        //string Type;
    public:
        string Type;
        string Sounds;
        string Name;
        int Age;
         public:
        Dog():Type("Dog"),Name("Max"),Age(6),Sounds("HowHow")
        {

        }
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout << "My Name is "<<Name<<endl;
        cout << "My Age is "<<Age<<endl;
        cout << "My Sounds is "<<Sounds<<endl;
        cout<<endl;
    }

};

class Human_Being: public Mammal
{
    private:
        string Type;
        int Salary;
        int Bonus;
        string Color;
    public:

};
class Dentist: public Human_Being
{
        private:
        string Job;
        int Bonus;
        int Salary;
        string Name;
        string Type;
    public:
        Dentist():Name("Ken"),Salary(6000),Job("Dentist"),Bonus(2000),Type("Male")
        {

        }

    void Display()
    {
        Material::Display();
        cout<<"I'm an "<<Job<<endl;
        cout<<"My Name is "<<Name<<endl;
        cout<<"My Type is "<<Type<<endl;
        cout<<"Salary: "<<Salary<<endl;
        cout<<"Bonus: "<<Bonus<<endl;
        cout<<endl;
    }


};
class Artist: public Human_Being
{
    private:
        string Job;
        int Bonus;
        int Salary;
        string Name;
        string Type;
    public:
        Artist():Name("Beth"),Salary(6000),Job("Artist"),Bonus(2000),Type("Female")
        {

        }

    void Display()
    {
        Material::Display();
        cout<<"I'm an "<<Job<<endl;
        cout<<"My Name is "<<Name<<endl;
        cout<<"My Type is "<<Type<<endl;
        cout<<"Salary: "<<Salary<<endl;
        cout<<"Bonus: "<<Bonus<<endl;
        cout<<endl;
    }

};
class Shop_keeper: public Human_Being
{
    private:
        string Job;
        int Bonus;
        int Salary;
        string Name;
    public:
        Shop_keeper():Name("Flo"),Salary(3000),Job("Shop Keeper"),Bonus(1000)
        {

        }

    void Display()
    {
        Material::Display();
        cout<<"I'm a "<<Job<<endl;
        cout<<"My Name is "<<Name<<endl;
        cout<<"Salary: "<<Salary<<endl;
        cout<<"Bonus: "<<Bonus<<endl;
        cout<<endl;
    }


};
class Platy_Pus: public Mammal
{
   private:
        //string Type;
    public:
        string Type;
        string Smell;
        string Name;
        string Color;
        int Age;
         public:
        Platy_Pus():Type("Plant"),Name("Violet"),Color("Violet!"),Smell("Violet :')")
        {

        }
        void Display()
    {
        Material::Display();
        cout <<"My Type is "<<Type<<endl;
        cout << "My Name is "<<Name<<endl;
        cout << "My Color is "<<Color<<endl;
        cout << "My Smell is "<<Smell<<endl;
        cout<<endl;
    }

};

class Reptile: public Animal
{
    private:
        string Type;
    public:

};

//I did not make (string Type) a class object because air,shop keeper and so on a type

int main()
{
    Material m1;
    m1.Display();

    Air nl1;
    nl1.Non_Living_Thing_Introduction();
    nl1.Display();

    Rock nl2;
    nl2.Non_Living_Thing_Introduction();
    nl2.Display();

    Animal a1;
    a1.Display();

    Cat c1;
    c1.Display();

    Dog d1;
    d1.Display();

    Platy_Pus p1;
    p1.Display();

    Mammal cow;
    cow.Display();

    Artist art1;
    art1.Display();

    Shop_keeper sk1;
    sk1.Display();

    Dentist dent;
    dent.Display();

    return 0;
}
