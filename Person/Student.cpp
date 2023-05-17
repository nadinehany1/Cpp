#include <iostream>

using namespace std;

class Person
{
public:
    string Name;
    int Id;
    string Company;
    int Age;
    void New_Person()
    {
        cout<<"I am a Person and my name is "<<Name<<endl;
    }
   /* class Student
    public:
        Person()
        {

        };*/
    void Set_Name(string name)
    {
        Name = name;
    }
    string Get_Name()
    {
       return Name;
    }
    void Set_Id(int id)
    {
        Id = id;
    }
    int Get_Id()
    {
       return Id;
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
        cout << "Id: " << Id <<endl;
        cout << "Age: " << Age << endl;
    }
    Employee (string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }


    ~Person()
    {
        cout << "Good Bye" << endl;
    }
};/*
Person Student(string name, int id, int age)
    {
        cout << "Name: " << Name <<endl;
        cout << "Id: " << Id <<endl;
        cout << "Age: " << Age << endl;
    };*/
class Student: public Person
    {
    private:
        float GPA;
        int Level;
    public:
        Student(float GPA_LOCAL, int Level_LOCAL): GPA(GPA_LOCAL),Level(Level_LOCAL)
        {
            cout <<"Hello Student "<<endl;
        }
    void SetStudentGPA(float GPA_LOCAL)
    {
        GPA = GPA_LOCAL;
    }
    ~Student()
    {
        cout << "Good Bye"<<endl;
    }
    };

int main()
{
    Student nadine;

   Student.Set_Age(19);
   Student.Introduce();
    return 0;
}
