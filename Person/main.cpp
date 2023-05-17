#include <iostream>
#include <string>

using namespace std;

// inheritance

class Person
{
    private :
    string Name;
    string Gender;
    double Age;

    public :
    Person():Name("Nadine") , Gender( "Female" ) ,  Age (23){}
    Person(string name , string gender , int age): Name(name) , Gender(gender ) ,  Age (age){}

    // to set name
    void set_name(string name)
    {
        Name = name;
    }
    // to get name
    string get_name()
    {
        return Name;
    }

    // to set gender
    void set_gender(string gender)
    {
        Gender = gender;
    }
    // to get gender
    string get_gender()
    {
        return Gender;
    }
    // to set age
    void set_age(int age)
    {
        Age = age;
    }
    // to get age
    double get_age()
    {
        return Age;
    }

    void Display()
    {
        cout << "name : " << Name<< endl;
        cout << "gender : " << Gender<< endl;
        cout << "age : " << Age << endl;
    }


};


//class student
class Student : public Person
{
    private :
    string Level;
    double GPA ;
    public :

    Student():Level("L-15") , GPA(3.5) {}
    // to set address
    void set_Level(string level)
    {
        Level = level;
    }
    // to get address
    string get_address()
    {
        return Level;
    }


    // to set GPA
    void set_GPA(double gpa)
    {
        GPA = gpa;
    }
    // to get GPA
    double get_GPA()
    {
        return GPA;
    }

    // possible  to be the same name of main function
    void Display()
    {
        //  using scope operator  to get func from main class
        Person::Display();
        cout << "Level :" << Level << endl;
        cout << "GPA : " << GPA <<endl;
    }


};

class KinderGardenStudent : public Student
{
    private :
    string hobbies;
    int ID ;
    public :

    KinderGardenStudent():hobbies("Swimming") , ID(999) {}
    // to set hobbies
    void set_hobbies(string hobb)
    {
        hobbies =hobb;
    }
    // to get hobbies
    string get_hobbies()
    {
        return hobbies;
    }


    // to set ID
    void set_ID(int id)
    {
        ID =id;
    }
    // to get ID
    int get_ID()
    {
        return ID;
    }

    // possible  to be the same name of main function
    void Display()
    {
        //  using scope operator  to get func from main class
        Student::Display();
        cout << "hobbies :" << hobbies << endl;
        cout << "ID : " << ID <<endl;
    }


};


// Class of employee
class Employee : public Person
{
    private:
    int salary;
    string Job_Name;
public:
    void Set_Employee_Salary(int salary_local)
    {
        salary = salary_local;
    }
    void Set_Employee_Job_Name(string job_name_local)
    {
        Job_Name = job_name_local;
    }
    void Display()
    {
        Person::Display();
        cout <<"Job Name: "<<Job_Name<<endl;
        cout << "Address :" << address << endl;
        cout << "Salary : " << salary <<endl;
    }
    private :
    string address;
    string sport;
    public :

   Employee():address("Rashid St.") , salary(20) , sport("football") {}
    // to set address
    void set_address(string addr)
    {
        address =addr;
    }
    // to get address
    string get_address()
    {
        return address;
    }


    // to set sport
    void set_sport(string sp)
    {
        sport =sp;
    }
    // to get sport
    string get_sport()
    {
        return sport;
    }

    // to set salary
    void set_salary(double salary_local)
    {
        salary =salary_local;
    }
    // to get salary
    double get_salary()
    {
        return salary;
    }


};


class MultiStudent: public Employee
{
private:
int Work_Hours;
int Study_Hours;

    public:
    void set_Study_hour(int Study_Hours_Local)
    {
        Study_Hours=Study_Hours_Local;
    }
    void set_Work_Hours(int Work_Hours_local)
    {
        Work_Hours = Work_Hours;
    }

    void Display()
    {
        //Student::Display();
        Employee::Display();
        cout<<"Work Hours: "<<Work_Hours<<endl;
        cout<<"Study Hours: "<<Study_Hours<<endl;
    }

};


class HardWorker: public Person
{
private:
int Work_Hours;
int Study_Hours;
int Extraa_Work_Hours;

    public:
    void set_Work_Hours(int Work_Hours_local)
    {
        Work_Hours = Work_Hours;
    }
    public:
    void set_Study_hour(int Study_Hours_Local)
    {
        Study_Hours = Study_Hours_Local;
    }
    void set_Extra_Work_Hours(int Extra_Work_Hours_local)
    {
    Extraa_Work_Hours = Extra_Work_Hours_local;
    }

    void Display()
    {
        Person::Display();
        cout<<"Study Hours: "<<Study_Hours<<endl;
        cout<<"Work Hours: "<<Work_Hours<<endl;
        cout<<"Extra Work Hours: "<<Extraa_Work_Hours<<endl;
    }

};

int main()
{
    KinderGardenStudent loly;
    loly.set_age(5);
    loly.set_gender("Female");
    loly.set_name("Loly");
    loly.set_Level("KG-1");
    loly.set_ID(50);
    loly.set_GPA(3.7);
    loly.Display();

    cout<<endl;

    HardWorker N;
    N.set_name("Nadine");
    N.set_Study_hour(6);
    N.set_Work_Hours(8);
    N.set_Extra_Work_Hours(2);
    N.Display();
    cout <<endl;

    MultiStudent M;
    N.set_name("Nour");
    N.set_Study_hour(5);
    N.set_Work_Hours(8);
    N.set_Extra_Work_Hours(2);
    N.Display();
    cout <<endl;

    Person p_;
    Person p_1("Jack" , "Male" , 35);
    cout <<endl;


}
