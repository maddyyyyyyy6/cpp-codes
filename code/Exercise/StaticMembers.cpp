#include<iostream>

using namespace std;

class Student
{
    private:
        static int count;
        int roll_no;
        int dateofbirth;
    public:
        Student(){};
        Student(int rn,int dob)
        {
            roll_no = rn;
            dateofbirth = dob;

        }
        static void updateCount()
        {
            ++count;
        }
        static void getCount()
        {
            cout << "Total No. of Students Objects is: " << count;
        }

};
