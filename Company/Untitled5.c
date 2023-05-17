#include <iostream>

using namespace std;

  class school
  {
      private:
      char student_name = 0;
      int max_student = 0;
      int student_number = 0;
      int teatcher_number = 0;
      int teatcher_salary = 0;

      public:
        void add_student(void)
        {
            if(max_student < 100 )
            {
                student_number++;
            }
        }

        void add_teatcher(void)
        {
            teatcher_number++;
        }

        void set_student_name (int name)
        {
            if(student_name>'a'&&student_name=<'z')
            {
                student_name = name;
            }
            else
                {
                cout<< "Invalid name value"<<endl;
            }
        }
        void set_avarge_teacher_salary(int target_value)
        {
            teachcher_salary = target_value;
        }

         void show_school_data(void)
         {
             cout<<"anual earned money = "<<annual_earned_money<<endl;
             cout<<"Teacher Avarage Salary = " <<set_avarge_teacher_salary<<endl;
             cout<<"Student Number = "<<student_number<<endl;
             cout<<"Teacher Number = "<<teatcher_number<<endl;
         }
  };

int main()
{
   // cout << "Hello world!" << endl;
    company elmagd;
    company elsafa;

    elmagd.add_student();
    elmagd.add_teatcher();

    cout<<endl;

    elsafa.


    return 0;

}
