#include <iostream>

using namespace std;

  class company
  {
      private:
      int annual_earned_money = 0;
      int employee_number = 0;
      int customer_number = 0;
      int avarage_emploee_salary = 0;

      public:
      company()
          {
            annual_earned_money = 5000;
            employee_number = 10;
            customer_number = 5;
            avarage_emploee_salary = 500;
          }
        void add_employee(void)
        {
            if(employee_number < 100 )
            {
                employee_number++;
            }
        }

        void add_customer(void)
        {
            customer_number++;
        }

        void set_avarage_employee_salary (int salary_local)
        {
            if(salary_local>1000)
            {
                avarage_emploee_salary = salary_local;
            }
            else
                {
                cout<< "Invalid salary value"<<endl;
            }
        }
        void set_annual_earned_money(int target_value)
        {
            annual_earned_money = target_value;
        }

         void show_compay_data(void)
         {
             cout<<"anual earned money = "<<annual_earned_money<<endl;
             cout<<"avarage employee salary = " <<avarage_emploee_salary<<endl;
             cout<<"customer Number = "<<customer_number<<endl;
             cout<<"employee number = "<<employee_number<<endl;
         }
  };

int main()
{
   // cout << "Hello world!" << endl;
    company Value;
    company BMW;

    Value.add_customer();

    Value.add_employee();
    Value.add_employee();
    Value.add_employee();
    Value.add_employee();
    Value.add_employee();

    Value.set_avarage_employee_salary(1500);
    Value.set_annual_earned_money(200000);

    Value.show_compay_data();

    cout<<endl;

    BMW.add_customer();
    BMW.add_customer();
    BMW.add_employee();
    BMW.add_employee();
    BMW.add_employee();

    BMW.set_annual_earned_money(500000);
    BMW.set_avarage_employee_salary(2000);

    BMW.show_compay_data();

    return 0;

}
