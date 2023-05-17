#include <iostream>

using namespace std;

class Hospital
  {
      private:
      string hospital_name;
      string patient_name;
      string id;
      string room_number;
      string status;
      int max_patient = 30;
      int max_nurse = 70;
      int patient_number = 0;
      int nurse_number = 0;
      int doctor_number = 0;
      int doctor_salary = 120000;

      public:
        void add_patient(void)
        {
            if(max_patient < 31 )
            {
                cout <<"Name: ";
                cin>>patient_name;
                cout <<"Id: ";
                cin>>id;
                cout <<"Room No: ";
                cin>>room_number;
                cout <<"Status: ";
                cin>>status;
                patient_number++;
            }
            else{
                cout << "Insufficient"<<endl;
            }
        }
        void add_nurse(void)
        {
            if(max_patient < 100 )
            {
                patient_number++;
            }
            else{
                cout << "Insufficient"<<endl;
            }
        }

        void add_doctor(void)
        {
            if(doctor_number < 31 )
            {
                doctor_number++;
            }
        }

        void set_hospital_name(string name)
        {
            hospital_name = name;
        }

        void set_patient_name(string name)
        {
            patient_name = name;
        }

        void set_average_doctor_salary(int target_salary)
        {
            if(doctor_salary<10000)
            {
                doctor_salary = target_salary;
            }
            else
                {
                cout<< "Invalid salary value!!"<<endl;
            }
        }

         void show_hospital_data(void)
         {
             cout<<"Doctor Number = "<<doctor_number<<endl;
             cout<<"Nurse Number = "<<nurse_number<<endl;
             cout<<"Patient Number = "<<patient_number<<endl;
             cout<<"Doctor Average Salary = " <<doctor_salary<<endl;

         }


  };


int main()
{
   // cout << "Hello world!" << endl;
    Hospital CMS;
    Hospital SFS;

    CMS.add_doctor();
    CMS.add_doctor();

    CMS.add_patient();
    CMS.set_hospital_name("CHM");
    cout<<endl;
    CMS.show_hospital_data();
    CMS.set_average_doctor_salary(5000);

    SFS.set_hospital_name("SFS");
    cout<<endl;
    SFS.add_patient();
    SFS.add_nurse();
    SFS.add_nurse();
    SFS.add_nurse();
    SFS.add_nurse();
    SFS.add_doctor();
    SFS.add_doctor();
    SFS.set_average_doctor_salary(5000);
    SFS.show_hospital_data();
    return 0;
}
