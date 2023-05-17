#include <iostream>

using namespace std;

class AbsEmployee
{
    virtual void AskForPromotion()=0;
};

class Employee: AbsEmployee
{
private:
    string Company;
    int Age;
protected:
        string Name;

public:
    void Set_Name(string name)
    {
        Name = name;
    }
    string Get_Name()
    {
       return Name;
    }
    void Set_Company(string company)
    {
        Company = company;
    }
    string Get_Company()
    {
       return Company;
    }
    void Set_Age(int age)
    {
        if(age>=18)
        Age = age;
    }
    int Get_Age()
    {
       return Age;
    }
    void Introduce()
    {
        cout << "Name: " << Name <<endl;
        cout << "Company: " << Company <<endl;
        cout << "Age: " << Age << endl;
    }
    Employee (string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age>30)
            cout << Name <<" got promoted " << endl;
        else
            cout << Name <<" , Sorry No promotion " << endl;

    }

};

class Devolper:public Employee
    {
    public:
        string FavProgrammingLang;
        Devolper(string name, string company, int age,string favProgrammingLang)
        :Employee(name,company,age)
        {
            FavProgrammingLang = favProgrammingLang;
        }
        void FixBug()
        {
            cout<<Get_Name()<<" fixed bug using "<< FavProgrammingLang<<endl;
        }
    };

int main()
{
    Employee employee1 = Employee("Nadine","yt",23);
    /*employee1.Name = "Nadine";
    employee1.Company = "You-Tube";
    employee1.Age = 23;*/
    employee1.Introduce();
    cout<<endl;
    Employee employee2 = Employee("John","gt", 35);
//    employee2.Name = "John";
//    employee2.Company = "Amazon";
//    employee2.Age = 35;
    employee2.Introduce();

    employee1.Set_Age(23);
    cout << employee1.Get_Name()<<" is "<<employee1.Get_Age()<<" years "<<endl;
//    employee1.AskForPromotion();
//    employee2.AskForPromotion();

    Devolper d = Devolper("Nadine", "yt", 23, "C");
    d.FixBug();
    d.AskForPromotion();
    return 0;
}
