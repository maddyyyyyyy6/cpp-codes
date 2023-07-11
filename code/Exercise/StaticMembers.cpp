#include <iostream>

using namespace std;

class Student
{
private:
    static int count;
    int roll_no;
    int dateofbirth;

public:
    Student(){};
    Student(int rn, int dob=0)
    {
        roll_no = rn;
        dateofbirth = dob;
        updateCount();
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

int main()
{
    cout << "This is the main function";
    // Create Student Objects
    Student one(18);
    Student two(19);
    // Now every time the obj is created the count is incremented
    Student::getCount();
    // from this function we will get the count value
    return 0;
}