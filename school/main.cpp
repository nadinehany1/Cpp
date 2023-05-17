#include <iostream>

using namespace std;

  class school
  {
      private:
      string school_name;
      int max_student = 100;
      int student_number = 1000;
      int teatcher_number = 15;
      int teatcher_salary = 10000;

      public:
        void add_student(void)
        {
            if(max_student < 10000 )
            {
                student_number++;
            }
        }

        void add_teatcher(void)
        {
            if(teatcher_number < 100 )
            {
                teatcher_number++;
            }
        }

        void set_name( string name)
        {
            school_name = name;
        }

        void set_avarge_teacher_salary(int target_value)
        {
            if(teatcher_salary<10000)
            {
                teatcher_salary = target_value;
            }
            else
                {
                cout<< "Invalid name value"<<endl;
            }
        }
        void show_school_data(void)
         {
             cout << "School name: " << school_name << endl;
             cout<<"Teacher Average Salary = " <<teatcher_salary<<endl;
             cout<<"Student Number = "<<student_number<<endl;
             cout<<"Teacher Number = "<<teatcher_number<<endl;
         }

  };



int main()
{
    school CMS;
    school SFS;

    CMS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    CMS.add_teatcher();
    CMS.add_student();
    CMS.add_teatcher();
    CMS.add_student();
    CMS.add_teatcher();
    CMS.add_student();
    CMS.add_teatcher();
    CMS.set_name("CMS");
    CMS.set_avarge_teacher_salary(5000);
    CMS.show_school_data();
    cout<<endl;

    SFS.set_name("SFS");
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_student();
    SFS.add_teatcher();
    SFS.add_student();
    SFS.add_teatcher();
    SFS.add_student();
    SFS.add_teatcher();
    SFS.add_student();
    SFS.add_teatcher();
    SFS.add_student();
    CMS.set_avarge_teacher_salary(6000);
    SFS.show_school_data();

    return 0;

}
